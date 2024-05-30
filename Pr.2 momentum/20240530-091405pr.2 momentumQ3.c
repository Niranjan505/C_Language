#include <stdio.h>
#include <conio.h>
main()
 {
    int num1, num2, num3, num4, max;
     clrscr();
    // Input four numbers
    printf("Enter for 1 numbers: ");
    scanf("%d",&num1);
    printf("\n");
    printf("Enter for 2 numbers: ");
    scanf("%d",&num2);
    printf("\n");
    printf("Enter for 3 numbers: ");
    scanf("%d",&num3);
    printf("\n");
    printf("Enter for 4 numbers: ");
    scanf("%d",&num4);
    printf("\n");

    // Nested if to find the maximum
    if (num1 > num2) 
    {
        if (num1 > num3) 
        {
            if (num1 > num4)
            {
                max = num1;
            } else
             {
                max = num4;
             }
        } else
         {
            if (num3 > num4)
            {
                max = num3;
            } else 
            {
                max = num4;
            }
        }
    } else 
    {
        if (num2 > num3) 
        {
            if (num2 > num4)
            {
                max = num2;
            } else 
            {
                max = num4;
            }
        } else
         {
            if (num3 > num4)
            {
                max = num3;
            } else 
            {
                max = num4;
            }
        }
    }

    // Print the maximum number
    printf("The maximum number is: %d\n", max);

    getch();
}
