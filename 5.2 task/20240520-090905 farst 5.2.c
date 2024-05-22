#include <stdio.h>
#include <conio.h>

main()
{  int num1,num2,num3;
  clrscr();
  
  printf("Enter a value of the first number: ");
  scanf("%d",&num1);
  
  printf("Enter a value of the second number: ");
  scanf("%d",&num2);
  
  printf("Enter a value of the third  number: ");
  scanf("%d",&num3); 
   
   if(num1<num2)
 {
    if(num1<num3)
    {
      printf("The minimum value is: %d",num1);
    }  
   else 
   { 
      printf("The minimum value is: %d",num3);
   } 
 }
   else
 { 
    if(num2<num3)
    {
         printf("The minimum value is: %d",num2);
    }
    else
    {
        printf("The minimum value is: %d",num3);
    }
 }
    
    
 getch();
}