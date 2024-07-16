#include <stdio.h>
#include <stdlib.h>


struct Employee 
{
    char name[100];
    char role[100];
};

int main() 
{
    int n;
    FILE *file;

    
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    
    struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));

    
    if (employees == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name); 
        printf("Role: ");
        scanf(" %[^\n]", employees[i].role); 
    }

    
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Could not open file\n");
        free(employees);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "Employee %d:\n", i + 1);
        fprintf(file, "  Name: %s\n", employees[i].name);
        fprintf(file, "  Role: %s\n", employees[i].role);
    }

    
    fclose(file);

    
    free(employees);

    printf("Employee details have been written to data.txt\n");

}