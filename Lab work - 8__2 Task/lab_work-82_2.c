#include <stdio.h>


main()
 {
    
    int Yearfirst, Yearlast,count =0;
     
    printf("Enter the farst numbar: ");
    scanf("%d", &Yearfirst);
    printf("Enter the second numbar: ");
    scanf("%d", &Yearlast);

    printf("Leap years between %d and %d are:\n", Yearfirst, Yearlast);

    int leapyear[ Yearlast-Yearfirst ];
    for (int i =Yearfirst; i<=Yearlast; i++)
     {
        
        if ((i% 4 == 0 && i % 100 != 0) || (i % 400 == 0)) 
        {
            leapyear[count]=i;
           count++;
        }
    }
    int leapyear[ Yearlast-Yearfirst ];
    
   printf(" The leapyear is :");
   for(int i = 0; i < count; i++)
   {
    printf("%d\t",leapyear[i]);
   }
 
}