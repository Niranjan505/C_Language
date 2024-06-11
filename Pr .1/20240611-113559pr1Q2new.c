#include <stdio.h>
#include <conio.h>

 main() 
 {
    float baseSalary=100, hraPercent=10, daPercent=5, taPercent=8;
    float hra, da, ta, grossSalary;
    clrscr();
    
    

    // Calculate HRA, DA, and TA
    hra = (hraPercent / 100) * baseSalary;
    da = (daPercent / 100) * baseSalary;
    ta = (taPercent / 100) * baseSalary;

    // Calculate gross salary
    grossSalary = baseSalary + hra + da + ta;

    // Output the gross salary
    printf("The gross salary is: Rs. %.2f\n", grossSalary);

    getch();
}