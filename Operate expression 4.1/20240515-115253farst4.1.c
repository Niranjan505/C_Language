#include <stdio.h>
#include <conio.h>
 main()
  {
    int a, b, c;

    clrscr();
    printf("Enter two integers to swap:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    
    printf("\nBefore swap: a = %d, b = %d\n", a, b);

    
    c= a;
    a = b;
    b = c;

    
    printf("After swap: a = %d, b = %d\n", a, b);

    getch();
    
}
