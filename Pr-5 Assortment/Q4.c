#include <stdio.h>


main()
{
    int row, col, i, j;

    printf("Enter a row size :");
    scanf("%d", &row);
    printf("Enter a col size :");
    scanf("%d", &col);

    printf("\n");

    int a[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            printf("a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);

        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int row_sum = 0;
    int rn,cn;
    printf("\nEnter a row number: ");
    scanf("%d", &rn);
    printf("Elements of row %d: ", rn);

    for (j = 0; j < col; j++)
    {
        printf("%d ", a[rn][j]);
        row_sum += a[rn][j];
    }
    printf("\nThe sum of row %d: %d\n", rn, row_sum);

    int col_sum = 0;
    printf("\nEnter column number: ");
    scanf("%d", &cn);
    printf("Elements of column %d:  ", cn);

    for (i = 0; i < row; i++)

    {
        printf("%d ", a[i][cn]);
        col_sum += a[i][cn];
    }
    printf("\nThe sum of column %d: %d\n", cn, col_sum);
    
}