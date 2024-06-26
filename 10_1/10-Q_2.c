#include <stdio.h>

void main() 
{
    int a;

    
    printf("Enter any number: ");
    scanf("%d", &a);

    if (a%3==0 && a%5==0) 
    {
        printf("The given number is divisible by both 3 & 5.\n");
    } 
    else 
    {
        printf("The given number is not divisible by both 3 & 5.\n");
    }

    
}