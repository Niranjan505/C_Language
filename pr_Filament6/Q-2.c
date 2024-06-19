#include <stdio.h>

main()
{
    
    int len = 0;
    int i, j;
    char w[20];

    printf("Enter a word : ");
    scanf("%[^\n]", &w);

    for (i = 0; w[i] != '\0'; i++)
    {
        len++;
    }
    for (i = 0; i < len; i++)
    {
        int n = 1;
        for (j = i + 1; j < len; j++)
        {

            if (w[i] == w[j])
            {
                n++;
                w[j] = '\0';
            }
        }
        if (w[i] != '\0')
        {
            printf("%c ==> %d\n", w[i], n);
        }
    }
}