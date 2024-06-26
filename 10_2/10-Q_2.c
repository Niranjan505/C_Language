#include <stdio.h>

int stringLength(char str[])
{
    int length;
    
   
    for (length = 0; str[length] != '\0'; length++)
   {}
    
    
    return length;
}

int main()
{
    char str[100]; 
    
    printf("Enter any string: ");
    scanf("%s",&str);
    
    int len = stringLength(str);
  
    printf("Length is: %d\n", len);
    
}
