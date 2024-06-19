#include <stdio.h>

main()
{
    char a[20];
    char rev[20];

    int len = 0;
    int n = 0;
    int cmp;
    printf("Enter a word : ");
    scanf("%s", &a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        len++;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        rev[n++] = a[i];
    }

    for (int i = 0; i < len; i++)
    {
        if (a[i] == rev[i])
        {

            cmp = 0;
        }

        else
        {

            cmp = 1;
            break;
        }
    }

    if (cmp == 0)
    {

        printf("word is palidrome ");
    }
    else
    {
        printf("word is not  palidrome.....! ");
    }
}
