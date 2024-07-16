#include <stdio.h>

int reverseNumber(int num) 
{
    int h = num / 100;
    int t = (num / 10) % 10;
    int u = num % 10;

    int reversed = (u* 100) + (t* 10) + h;
    return reversed;
}

int main() 
{
    int number;

    
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);


    if (number < 100 || number > 999) 
    {
        printf("The number entered is not a 3-digit number.\n");
        
    }

    int reversed = reverseNumber(number);

    printf("The reversed number is: %d\n", reversed);

}