#include <stdio.h>
#include <conio.h>
 main() 
 {
    int i,j,s;
    clrscr();
    
    for(i=1;i<=5;i++)
     {
         for(s=5; s>i; s--)
         {
             printf(" ");
         }
         for(j=1;j<=i;j++)
         {
             printf("*");
         } 
         
         for(j=i-1;j>=1;j--)
         {
             printf("*");
         }    
      printf("\n");
     }
    getch();
 }  