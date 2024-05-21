#include <stdio.h>
#include <conio.h>

main()
{
   int a=1;
   int n;
   
 clrscr();
 printf("Enter the 'N' numbar ...");
 scanf("%d",&n);
while (a<=n)
{
 printf("%d\t",a);
 a++;
} 
getch();
}