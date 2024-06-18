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
   
   int large = a[0][0];
   
   for(i = 0; i < row; i++)
   {
   
   for(j = 0; j < col; j++)
   {
     if(a[i][j] > large)
     {
        large = a[i][j];
     }
   }
   
   }
  printf("The largest element is: %d\n", large);

}