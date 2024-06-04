#include <stdio.h>
#include <conio.h>

main()
{
   int n,rem,sum = 0,mul = 1;
   clrscr();
   printf("Enter a n number:");
   scanf("%d",&n);
   while( n!= 0)
   {
     rem = n%10;
     sum += rem;
     mul *= rem;

    n/=10;
   }

    if(sum==mul)
    {
    printf("%d is  magic number",n);
    }
    else
    {
    printf("%d is not magic number",n);
    }


  getch();
}