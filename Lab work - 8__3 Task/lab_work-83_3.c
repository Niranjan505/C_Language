#include <stdio.h>

main()
{
    int row, col, sum = 0;

    printf("Enter the size of row :");
    scanf("%d", &row);
    printf("\n");
    printf("Enter the size of col :");
    scanf("%d", &col);
    printf("\n\n");

    int a[row][col];

    printf("matrix :-");
    printf("\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (i==j)
            {
                printf("%d", a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (i==j)
            {

                sum = sum + a[i][j];
            }
        }
    }

    printf("The sum of diagonal elements of an Array:%d", sum);
}
