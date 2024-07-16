#include <stdio.h>

void main() 
{
    char a;
    printf("Enter 'n' to check a number or 'c' to check a character: ");
    scanf(" %c", &a);

    switch (a)
     {
        case 'n': 
        {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);

            switch ((num > 0) - (num < 0)) 
            {
                case 1:
                    printf("The number is positive.\n");
                    break;
                case -1:
                    printf("The number is negative.\n");
                    break;
                case 0:
                    printf("The number is zero.\n");
                    break;
            }
            break;
        }

        case 'c': 
        {
            char ch;
            printf("Enter a character: ");
            scanf(" %c", &ch);

            switch (ch) 
            {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    printf("The character is a vowel.\n");
                    break;
                default:
                    printf("The character is a consonant.\n");
                    break;
            }
            break;
        }

        default:
            printf("Invalid choice.\n");
            break;
    }

}
