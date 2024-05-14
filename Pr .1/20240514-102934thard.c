#include <stdio.h>
#include <conio.h>

 main()
  {
    double angle1, angle2, angle3;

    // Input the two angles
    printf("Enter the first angle: ");
    scanf("%lf", &angle1);
    
    printf("Enter the second angle: ");
    scanf("%lf", &angle2);
    
    

    // Calculate the third angle
    angle3 = 180 - (angle1 + angle2);
    
    // Output the third angle
    printf("The third angle is: %.2f\n", angle3);
    
    getch();
}
