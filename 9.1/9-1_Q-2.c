#include <stdio.h>

main()
{
    char name[20];

    printf("Enter your NAME : ");
    scanf("%[^\n]",&name);

    printf("NAME\t: %s\n\n",name);

    for (int i = 0; name[i]!='\0'; i++)
    {
        if (name[i] >= 65&& name[i]<=90)
        {
            name[i]+=32;
        }
    }

    printf("name\t: %s",name);
    
    
}