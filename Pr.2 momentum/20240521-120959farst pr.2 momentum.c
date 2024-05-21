#include <stdio.h>
#include <conio.h>

main()
 {
    int n;
    
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);
    
    (n%2==0)
          ? printf("This numbar is even %d",n)
          : printf("This numbar is odd %d",n);
    getch();
}
    