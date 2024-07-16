#include <stdio.h>

void main() 
{
    int n;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    int smallest = arr[0];

    
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < smallest) 
        {
            smallest = arr[i];
        }
    }

    
    printf("The smallest element in the array is: %d\n", smallest);

}