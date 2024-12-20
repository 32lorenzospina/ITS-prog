#include <stdio.h> // Include standard input-output library

int main()
{
    printf("Hello WORLD!\n\n\n");

    char name[32]; // Define a character array to store the name

    printf("Enter a name: ");
    scanf("%s", name); // Read user input into the `name` variable
    
    // Print a message with the entered name
    printf("\nHello\t%s\n\n\n", name);

    return 0;
}
