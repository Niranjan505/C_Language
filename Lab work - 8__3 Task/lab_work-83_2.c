#include <stdio.h>

main()
{
    int row, col;

    printf("Enter the size of row :");
    scanf("%d", &row);
    printf("\n");
    printf("Enter the size of col :");
    scanf("%d", &col);
    printf("\n\n");

    int a[row][col], b[row][col];

    printf("first matrix :-");
    printf("\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf(" second matrix :-");
    printf("\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter a[%d][%d]", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    int sum[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

        
    }
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}