#include <stdio.h>

#define MAX_SIZE 5

int main(void) {
    // Declare a string
    char another_string[MAX_SIZE];
    
    // Read a string from the user, note we DO NOT use scanf for strings
    printf("Enter a string: ");
    fgets(another_string, MAX_SIZE, stdin);
    
    // Print the string using fputs
    fputs(another_string, stdout);

    return 0;
}