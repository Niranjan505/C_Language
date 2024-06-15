#include <stdio.h>
#include <conio.h>

main() 
{
    int n, firstdigit, lastdigit, sum;
    clrscr();
    
    printf("Enter any number: ");
    scanf("%d", &n);

    firstdigit = n;
    while (firstdigit >= 10)
    {
        firstdigit /= 10;
    }

    lastdigit = n % 10;

    sum = firstdigit + lastdigit;

    printf("The sum of the first and the last digit: %d\n", sum);

    getch();
}
