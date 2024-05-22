#include <stdio.h>
#include <conio.h>
 main() 
{
    clrscr();
    int a,b,c,abc;

    
    printf("Enter a value of the first number: ");
    scanf("%d", &a);
    printf("Enter a value of the second number: ");
    scanf("%d", &b);
    printf("Enter a value of the third number: ");
    scanf("%d", &c);

    
    abc = (a> b) ? 
          ((a > c) ? a : c) : 
          ((b> c) ? b : c);

    
    printf("The maximum value is: %d\n", abc);

    getch();
}
