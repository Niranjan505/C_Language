#include <stdio.h>
#include <conio.h>
 
 main()
{   
      int negetive, natural, positive;
      clrscr();
      
     printf("entre any numbar:");
     scanf("%d",& negetive);
      
      if(negetive<0)
      { 
         printf("This numbar is negative");
      }
      else
      {
        printf("This numbar is not negetive");
      }
      printf ("\n\n" );
      printf("Enter any numbar :");
      scanf("%d",&natural);
      
      if(natural=0)
      {
       printf("This numbar is natural");
      }  
      else
      {
       printf("This numbar is not natural");
      }
      printf ("\n\n" );
      printf("Enter any numbar :");
      scanf("%d",&positive);
      
      if(positive>0)
      {
       printf("This numbar is positive");
      }  
      else
      {
       printf("This numbar is not positive");
      }
      
      getch();
} 
