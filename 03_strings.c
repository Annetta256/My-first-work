// Build progress bar using strings in C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int total = 50; // Total length of the progress bar
    int progress = 30; // Current progress
    char *bar = malloc(total +1); // Allocate memory for the progress bar string
    if (!bar) return 1; // Check for successfull memory allocation
    memset(bar, '=', progress); // Fill completed pert with '='
    memset(bar + progress, ' ', total - progress); // Fill remaining pert with spaces
    bar[total] = '\0'; // Null-terminate the string
    printf("[%s] %d%%\n", bar, (progress * 100) / total); // Print the progress bar
    free(bar); // Free allocated memory
    return 0;
}
    