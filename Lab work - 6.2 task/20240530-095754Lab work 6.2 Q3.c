#include <stdio.h>
#include <conio.h>

main() 
{
    int a=2;
    int n;
    clrscr();
    
    printf("Enter a 'n' number:");
    scanf("%d",&n);

    if (n >= 2) 
    {
        do {
            printf("%d\n", a);
            a+= 2;
        } while (a <= n);
    } 
    else 
    {
        printf("There are no even numbers up to %d\n", n);
    }

    getch(); 
}
