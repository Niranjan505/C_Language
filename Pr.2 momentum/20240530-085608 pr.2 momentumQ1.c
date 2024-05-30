#include <stdio.h>
#include <conio.h> 

main() 
{
    char ch;

    clrscr();  

    printf("Enter any character: ");
    scanf("%c",&ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
    {
        printf("\nThe character is an alphabet.\n");
    }
    else if (ch >= '0' && ch <= '9') 
    {
        printf("\nThe character is a digit.\n");
    }
    else 
    {
        printf("\nThe character is a special character.\n");
    }

    getch();  
    
}
