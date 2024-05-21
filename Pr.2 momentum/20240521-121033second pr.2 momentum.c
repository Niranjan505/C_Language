#include <stdio.h>
#include <conio.h>
 main() 
 {
    float units;
    float bill = 0.0;
 
   clrscr();
    printf("Enter the number of electricity units : ");
    scanf("%f", &units);

    if (units <= 50)
     {
        bill = units * 0.50;
    }
     else if (units <= 150) 
    {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } 
    else if (units <= 250) 
    {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } 
    else
     {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    
    bill = bill + (bill * 0.20);

    printf("\n\nThe total electricity bill is: Rs. %.2f\n", bill);
    
getch();
}
