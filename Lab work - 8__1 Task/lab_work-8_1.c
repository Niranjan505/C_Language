#include <stdio.h>

main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size];

    printf("\n\nArray\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] =", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n Array output \n\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n\n Length of Array is : %d", size);
}

