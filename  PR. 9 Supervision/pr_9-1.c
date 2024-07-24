#include <stdio.h>

int main() {
    FILE *even_file, *odd_file;
    int n;

    even_file = fopen("even_file.txt", "w");
    odd_file = fopen("odd_file.txt", "w");
    if (even_file == '\0' || odd_file == '\0')
     {
        printf("Unable to open file !!!\n");
    }
    else
     {
        printf("File open successfully...\n");
    }

    fprintf(even_file, "Even numbers from even_file.txt:\n");
    fprintf(odd_file, "Odd numbers from odd_file.txt:\n");

    for (n = 50; n <= 70; n++)
     {
        
        if (n % 2 == 0) 
        {
            fprintf(even_file, "%d, ", n);
        } 
        else 
        {
            fprintf(odd_file, "%d, ", n);
        }
    }

    fclose(even_file);
    fclose(odd_file);
}