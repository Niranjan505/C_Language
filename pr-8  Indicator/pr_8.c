#include <stdio.h>

void main()
{
    char a[100];
    int len;

    printf("Enter any world : ");
    scanf("%[^\n]", &a);

    for (len = 0; a[len] != '\0'; len++)
        ;

    int *ptr;
    ptr = &len;

    printf("The size of lenth : %d", *ptr);
}
