#include <stdio.h>

main()
{
    int size, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size];

    printf("\n\nArray\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] =", i);
        scanf("%d", &a[i]);
    }
   

    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
     float avg = (float)sum / size;
    printf("\n\n avg is : %.2f\n ", avg);
}
