#include <stdio.h>
#include <conio.h>

 main()
  {
    int A, B;

    // Input
    printf("Enter the first number A : ");
    scanf("%d", &A);
    printf("Enter the second number B : ");
    scanf("%d", &B);

    // Swapping using XOR
    A = A ^ B; // Step 1
    B = A ^ B; // Step 2
    A = A ^ B; // Step 3

    // Output
    printf("After swapping:\n");
    printf("A : %d\n", A);
    printf("B : %d\n", B);

    getch();
}
