#include <stdio.h>

int main(void) {
    char buffer[50]; 
    printf("Enter your name: ");
    scanf("%49s", buffer); // Read a string grom user input safety
    printf("Hello, %s!\n", buffer); // Greet the user
    return 0;
}