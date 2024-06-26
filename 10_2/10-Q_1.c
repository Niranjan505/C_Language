#include <stdio.h>

int sum_array(int arr[], int size)
 {
    int sum = 0;
    for(int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

int main()
 {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements:\n");
    for(int i = 0; i < size; i++) 
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int sum = sum_array(arr, size);
    printf("The sum of an Array: %d\n", sum);

 }