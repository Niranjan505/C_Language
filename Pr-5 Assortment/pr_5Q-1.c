#include<stdio.h>

main()
{
  int size,i;
  
  printf("Enter a array size :");
  scanf("%d",&size);
  
  int a[size];
  for( i = 0; i < size; i++)
  {
    printf("a[%d] :",i);
    scanf("%d",&a[i]);
  
  }
  printf("The negetive numbers... :");
  
  for( i = 0; i < size; i++)
  {
      if(a[i]<0)
      {
         
         printf("%d ",a[i]);
         
      }
  
  }

}