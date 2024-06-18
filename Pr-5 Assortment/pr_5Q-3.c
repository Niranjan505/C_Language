#include<stdio.h>

main()
{
   int row,col,i,j;
   
   printf("Enter a row size :");
   scanf("%d",&row);
   printf("Enter a col size :");
   scanf("%d",&col);
   
   printf("\n");
   
   int a[row][col];
   
   for(i = 0; i < row; i++)
   {
   for(j = 0; j < col; j++)
   {
     
     printf("a[%d][%d] : ",i,j);
     scanf("%d",&a[i][j]);
     
   }
   
   }
   
   printf("Transpose matrix ... :- \n");
    for (int i = 0; i < row; i++)
     {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ",a[j][i]);
        }
        printf("\n");
    }


}