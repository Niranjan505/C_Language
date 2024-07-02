#include <stdio.h>

int arraycube(int size)
{
    size = size * size * size;
    return size;
}
void main()
{
    int a;
    printf("Enter Array  Size: ");
    scanf("%d", &a);

    int array[a][a], *ptr[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            array[i][j] = arraycube(array[i][j]);
            ptr[i][j] = &array[i][j];
        }
    }
    printf("\n\n");
    scanf("arrayCube of Your Array is: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d:   ", *ptr[i][j]);
        }
    }
}