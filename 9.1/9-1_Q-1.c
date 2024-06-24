#include <stdio.h>

main()
{
    char name[20];

    printf("Enter your name : ");
    scanf("%[^\n]",&name);

    printf("NAME\t: %s\n\n",name);

    for (int i = 0; name[i]!='\0'; i++)
    {
        if (name[i]>=97 && name[i]<=122)
        {
            name[i]-=32;
        }
    }

    printf("NAME\t: %s",name);
    
    
}