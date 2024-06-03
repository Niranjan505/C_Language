#include <stdio.h>
#include <conio.h>
 main() 
 {
    int n, num = 0;
    clrscr();
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        num = num * 10 + 1;
        printf("%d\n", num);
    }
    getch();
}

