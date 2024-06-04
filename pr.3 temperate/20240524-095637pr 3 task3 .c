#include <stdio.h>
#include <conio.h>
 main() 
 {

    int num, a, b, sum;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    b = num % 10;

    
    a = num;
    while (a >= 10) {
        a /= 10;
    }

    
    sum = a + b;

    
    printf("Sum of the first and last digit: %d\n", sum);


   getch(); 
}
