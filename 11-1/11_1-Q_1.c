#include <stdio.h>

int square(int size)
{
    size = size * size ;
    return size;
}
void main()
{
    int a;
    printf("Enter Array  Size: ");
    scanf("%d", &a);

    int array[a], *ptr[a];
    for (int i = 0; i < a; i++)
    {
        
            printf("Enter a[%d]: ", i);
            scanf("%d", &array[i]);
    }
    for (int i = 0; i < a; i++)
    {
        
            array[i] = square(array[i]);
            ptr[i] = &array[i];
    }
    printf("\n\n");
    scanf("square of Your Array is: \n");
    for (int i = 0; i < a; i++)
    {
        
            printf("%d:   ", *ptr[i]);
    }
}