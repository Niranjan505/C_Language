#include <stdio.h>
#include <conio.h>

 main() 
 {
    float baseSalary, hraPercent, daPercent, taPercent;
    float hra, da, ta, grossSalary;

    // Input base salary and percentages for HRA, DA, and TA
    printf("Enter the base salary: ");
    scanf("%f", &baseSalary);
    printf("Enter the percentage of HRA: ");
    scanf("%f", &hraPercent);
    printf("Enter the percentage of DA: ");
    scanf("%f", &daPercent);
    printf("Enter the percentage of TA: ");
    scanf("%f", &taPercent);

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
