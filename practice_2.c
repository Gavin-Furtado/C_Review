#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Ask for user input
    printf("Enter your name: ");
    scanf("%s", name);  // Read the name as a string (no spaces allowed)

    printf("Enter your age: ");
    scanf("%d", &age);  // Read the age as an integer

    // Output a message using the input
    printf("Hello, %s! You are %d years old.\n", name, age);

    return 0;
}
