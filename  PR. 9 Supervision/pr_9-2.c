#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll_no;
    char name[20];
    int chem_marks;
    int phy_marks;
    int math_marks;
};

void clearInputBuffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    struct Student s1[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details of student %d :\n", i + 1);
        printf("Roll no => ");
        scanf("%d", &s1[i].roll_no);
        clearInputBuffer();  
        printf("Name => ");
        scanf("%[^\n]", s1[i].name);
        clearInputBuffer();
        printf("Chemistry marks => ");
        scanf("%d", &s1[i].chem_marks);
        printf("Physics marks => ");
        scanf("%d", &s1[i].phy_marks);
        printf("Mathematics marks => ");
        scanf("%d", &s1[i].math_marks);
        printf("\n\n");
    }

    FILE *fp;
    fp = fopen("marksheet.txt", "w");

    if (fp != NULL)
    {
        printf("File opened successfully...\n");

        for (int i = 0; i < 5; i++)
        {
            int total = s1[i].chem_marks + s1[i].phy_marks + s1[i].math_marks;
            float percent = (float)total / 300 * 100;

            fprintf(fp, "%s (%d)\n", s1[i].name, s1[i].roll_no);
            fprintf(fp, "Chemistry: %d\n", s1[i].chem_marks);
            fprintf(fp, "Physics: %d\n", s1[i].phy_marks);
            fprintf(fp, "Mathematics: %d\n", s1[i].math_marks);
            fprintf(fp, "Total: %d/300\n", total);
            fprintf(fp, "Percentage: %.2f%%\n", percent);
            fprintf(fp, "\n");
        }

        fclose(fp);
    }
    else
    {
        printf("Unable to open file !!!\n");
    }

    return 0;
}