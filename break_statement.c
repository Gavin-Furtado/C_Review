// #include <stdio.h>
// #include <stdlib.h>

// int main(){

//     return EXIT_SUCCESS;
// }

#include <stdio.h>

#define BUFFER_SIZE 10

// Declare the buffer
float data_buffer[BUFFER_SIZE] = {0};
int buffer_index = 0;

// Function to write data to the buffer
void add_to_buffer(float new_data) {
    // If the buffer is full and we've wrapped back to index 0, clear it
    if (buffer_index == 0) {
        for (int i = 0; i < BUFFER_SIZE; i++) {
            data_buffer[i] = 0; // Reset all elements to 0
        }
    }
    
    // Add new data at the current position
    data_buffer[buffer_index] = new_data;

    // Move to the next index in the buffer
    buffer_index = (buffer_index + 1) % BUFFER_SIZE;
    
}

// Function to print the contents of the buffer
void print_buffer() {
    printf("Buffer contents: ");
    for (int i = 0; i < BUFFER_SIZE; i++) {
        printf("%.2f ", data_buffer[i]);
    }
    printf("\n");
}

int main() {
    // Simulate adding data to the buffer
    for (int i = 1; i < 22; i++) {
        add_to_buffer(i * 16.1); // Example data
        print_buffer(); // Print the buffer after each addition
    }
    return 0;
}
