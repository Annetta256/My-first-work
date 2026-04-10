#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void) {
    const char *msg1 = "Hello, ";
    const char *msg2 = "there!";
    
    //Calculate the length of both strings
    size_t len = strlen(msg1) +1 + strlen(msg2) +1;
    char *result = malloc(len); // Allocate memory for the concatenated string

   // if (result) return 1; // Check for successful memory allocation

    // Create new string Hello, there!
    strcpy(result, msg1); // Copy first string into result
    strcat(result, " "); // Add space between words
    strcat(result, msg2); // Cocatenate second string
      
    printf("%s\n", result); // Output: Hello, there!
    printf("Length of the string: %zu\n", strlen(result)); // Output: Length
    free(result); // Free allocated memory
    return 0;
}