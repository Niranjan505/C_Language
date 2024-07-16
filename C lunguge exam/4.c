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

    
    int *ptr = arr;
    printf("The squares of the elements are:\n");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", (*ptr) * (*ptr));
        ptr++; 
    }

    printf("\n");

    
}