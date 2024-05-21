#include <stdio.h>
#include <conio.h>

main()
 {
    int N;
    
    clrscr();
    
    printf("Enter a 'N' numbar: ");
    scanf("%d", &N);

    if (N % 2 == 0)
     {
        N--;
    }

    while (N > 0)
     {
        printf("%d\n", N);
        N -= 2; 
    }

    getch();
}
