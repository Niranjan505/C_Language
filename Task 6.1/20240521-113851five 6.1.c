#include <stdio.h>
#include <conio.h>

main()
 {
    
    int Yearfarst, Yearlast, year;
    
    clrscr();
    
    printf("Enter the farst numbar: ");
    scanf("%d", &Yearfarst);
    printf("Enter the second numbar: ");
    scanf("%d", &Yearlast);

    
    year = Yearfarst;

    
    printf("Leap years between %d and %d are:\n", Yearfarst, Yearlast);
    while (year <= Yearlast)
     {
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            printf("%d\n", year);
        }
        year++;
    }



    getch();
}
