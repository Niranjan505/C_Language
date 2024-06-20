#include <stdio.h>
#include <string.h>


main()
 {
    
    char correctEmail[] = "admin@gmail.com";
    char correctPassword[] = "12345";

    char email[50];
    char password[50];
    
   
     printf("\n\n");
     
    printf("Enter your email: ");
    scanf("%s", &email);

    printf("Enter your password: ");
    scanf("%s",&password);

    
    if (strcmp(email, correctEmail) == 0 && strcmp(password, correctPassword) == 0) 
    {
        printf("Login Successful...\n");
    }
     else 
    {
        printf("Login Failed. Invalid Credentials\n");
    }

    
}