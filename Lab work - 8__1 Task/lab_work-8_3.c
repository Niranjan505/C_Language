#include <stdio.h>

main()
{
    int size, n;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size], b[size], sum[size];

    printf("\n\nEnter First Array.....\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] =", i);
        scanf("%d", &a[i]);
    }

    printf("\n\nEnter second Array.....\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] =", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum[i] = a[i] + b[i];
    }

    printf("This is c Array :");
    for (int i = 0; i < size; i++)
    {

        printf("%d\t", sum[i]);
    }
}
