#include <stdio.h>

main()
{

    char p[20];
    int len = 0, upr = 0, lwr = 0, digit = 0, sym = 0;

    printf("Enter password : ");
    scanf("%s", &p);

    for (int i = 0; p[i] != '\0'; i++)

        len++;

    for (int i = 0; i < len; i++)
    {

        if (p[i] >= 65 && p[i] <= 90)
            upr++;
        else if (p[i] >= 97 && p[i] <= 122)
            lwr++;
        else if (p[i] >= 48 && p[i] <= 57)
            digit++;
        else
            sym++;
    }
    if (len >= 6 && upr >= 1 && lwr >= 1 && digit >= 1 && sym >= 1)
    {

        printf("password is strong");
    }
    else
    {

        printf("password is not strong");
    }
}