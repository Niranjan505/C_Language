#include <stdio.h>

void swapc(int *x,int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    
}
void main ()
{
    int x,y;
   printf("Enter x:-  ");
   scanf("%d",&x);
   printf("Enter y:-  ");
   scanf("%d",&y);
   
   swapc(&x,&y);
   printf("\n");
   printf("x\t : %d\n",x);
   printf("y\t : %d\n",y);

}