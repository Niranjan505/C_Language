#include <stdio.h>
#include <conio.h>
 main() 
 {

    int number;
    int count = 0;
    
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (number < 0) 
    {
        number = -number;
    }

    do {
        count++;
        number /= 10;
    } while (number != 0);

    printf("Total number of digits: %d\n", count);

   getch(); 
}
