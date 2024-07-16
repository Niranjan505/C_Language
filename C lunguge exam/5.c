#include <stdio.h>


struct House 
{
    int room_quantity;
    int established_year;
    char city[50];
};

void main() 
{
    int n;

    
    printf("Enter the number of houses: ");
    scanf("%d", &n);

    
    struct House houses[n];
    
    for (int i = 0; i < n; i++) 
    {
        printf("Enter details for house %d:\n", i + 1);

        printf("Room quantity: ");
        scanf("%d", &houses[i].room_quantity);

        printf("Established year: ");
        scanf("%d", &houses[i].established_year);

        printf("City: ");
        scanf("%s", houses[i].city);
    }

    printf("\nList of houses:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("House %d:\n", i + 1);
        printf("  Room quantity: %d\n", houses[i].room_quantity);
        printf("  Established year: %d\n", houses[i].established_year);
        printf("  City: %s\n", houses[i].city);
    }

    
}
