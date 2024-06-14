#include <stdio.h>

main()
{

    int size1,size2;

    printf("Enter first array size :");
    scanf("%d", &size1);

    printf("Enter second array size :");
    scanf("%d", &size2);

    int a[size1], b[size2];

    printf("Array  input :\n");

    for (int i = 0; i < size1; i++)
    {
        printf("Enter a[%d] =", i);
        scanf("%d", &a[i]);
    }
    printf("\n");

    for (int i = 0; i < size2; i++)
    {
        printf("Enter b[%d] =", i);
        scanf("%d", &b[i]);
    }
    printf("\n");
     
    printf("\n\n Array output \n\n");

    for (int i = 0; i < size1; i++)
    {
        printf("%d\t", a[i]);
    }

    for (int i = 0; i < size2; i++)
    {
        printf("%d\t", b[i]);
    }
      int array[size1 + size2];

    printf(" Output Array C is: ");

    for(int i = 0; i < size1 + size2; i++)
    {
        if(i < size1)
        {
            array[i] =a[i];
        }
        else 
        {
            array[i] = b[i - size1];
        }
        printf("%d", array[i]);
        if(i != size1 + size2 - 1)
        {
            printf("   ");
        }
    }
    printf("\n");
}