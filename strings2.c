#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[50] = "Hello,";
    char str2[] = "World!";
    
    // Add space between words
    strcat(str1, " ");
    strcat(str1, str2);
    int size = strlen(str1); // Calculate length og the string

    printf("%s\n", str1); // Output: Hello, World!
    printf("Length of the string: %d\n", size); // Output: Length of the string: 15

    return 0;
}