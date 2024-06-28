#include <stdio.h> 
int sum (int a1 ,int a2);
int sub (int a1 ,int a2);
int multi(int a1 ,int a2);
int divi (int a1 ,int a2);
int modul (int a1 ,int a2);

main()
{
   int calculator,a1,a2;
   
   do
   {
       printf("press 1 for + \n");
       printf("press 2 for - \n");
       printf("press 3 for * \n");
       printf("press 4 for / \n");
       printf("press 5 for %%\n");
       printf("press 0 for The Exit\n\n");
       
       printf("Enter your choice: ");
       scanf("%d", &calculator);
       if(calculator != 0)
       {
         printf("\n");
         
         printf("Enter the first number: "); 
         scanf("%d", &a1);
         
         printf("\n");
         
         printf("Enter the second number: "); 
         scanf("%d", &a2);
         
         printf("\n");
       }
     switch (calculator)
     {
          case 1:
     
            sum(a1, a2);

          break;

          case 2:

            sub(a1, a2);

          break;

          case 3:

            mult(a1, a2);

          break;

          case 4:

            divi(a1, a2); 
      
          break;

          case 5:

            modulus(a1, a2);

          break;

          case 0:

            printf("You are exited\n<<<<<<<>>>>>>>>");
    }
   } while (calculator != 0);
}
int sum(int a1, int a2)
{
   printf("addition of %d and %d is: %d\n\n", a1, a2, a1 + a2);
}
int sub(int a1, int a2)
{
   printf("substraction of %d and %d is: %d\n\n", a1, a2, a1 - a2);
}
int mult(int a1, int a2)
{
   printf("multiplication of %d and %d is: %d\n\n", a1, a2, a1 * a2);
}
int divi(int a1, int a2)
{
  if(a2 != 0)
  {
   printf("division of %d and %d is: %d\n\n", a1, a2, a1 / a2);
  }
  else
  { 
    printf("Can't divide by zero\n\n");
  }
}
int modulus(int a1, int a2)
{
   printf("modulus of %d and %d is: %d\n\n", a1, a2, a1 % a2);
}