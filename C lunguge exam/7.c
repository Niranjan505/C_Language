#include <stdio.h>

void main() 
{
    
    int rows = 5;

    
    for (int i = 1; i <= rows; i++) 
    {
        
        int value = (11 - i) * (11 - i);

        
        for (int j = 1; j <= i; j++) 
        { 
            printf("%d ", value);
        }

        printf("\n");
    }

    
}