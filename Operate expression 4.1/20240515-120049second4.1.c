#include <stdio.h>
#include <conio.h>
 main()
  {
    int a, b;

    clrscr();
    printf("Enter two integers to swap:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    
    printf("\nBefore swap: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("After swap: a = %d, b = %d\n", a, b);

    getch();
    
}
    