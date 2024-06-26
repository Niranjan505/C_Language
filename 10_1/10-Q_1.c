#include <stdio.h>

int cube()
{

    int n;
    printf("Enter a n :-  ");
    scanf("%d", &n);

    return n * n * n;
}

void main()
{

    printf("cube : %d", cube());
}