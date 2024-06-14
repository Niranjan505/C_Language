#include <stdio.h>

main()
{
    int row, col,sum = 0;

    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter col: ");
    scanf("%d", &col);
    
    int a[row][col]; 
   

    printf("\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the value of a[%d][%d] =", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++ )
        {
        sum += a[i][j];
        }
        printf("\n");
    }
     
    printf("\n\n avg is : %.2f\n ",(float)sum /(row*col));
}