#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // For strlen

int main() {
    char temp[100];  // Temporary buffer to read the name input
    char *name;
    int size;
    int age;

    // Ask for user input
    printf("Enter your name: ");
    // scanf("%s", &name);  // Read the name as a string (no spaces allowed)
    fgets(temp, sizeof(temp), stdin);  // Read the name with spaces
    
    // Remove the newline character if present
    temp[strcspn(temp, "\n")] = '\0';

    // Calculate the size of the name
    size = strlen(temp) + 1;  // +1 for the null terminator

    // Dynamically allocate memory based on the size of the input string
    name = (char *)malloc(size * sizeof(char));

    if (name == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
    }

    strcpy(name, temp);

    printf("Hello, %s!\n", name);

    free(name);

    // printf("Enter your age: ");
    // scanf("%d", &age);  // Read the age as an integer

    // Output a message using the input
    // printf("Hello, %s! You are %d years old.\n", name, age);

    return 0;
}
