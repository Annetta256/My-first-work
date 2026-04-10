#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[50] = "Hello, ";
    char str2[] = "World!";

    // Конкатeнація рядків
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);

     //Довжина рядка
     size_t len = strlen(str1);
     printf("Length og String: %zu\n", len);

     //Порівняння рядків
     char str3[] = "Hello, World!";
     if (strcmp(str1, str3) == 0) {
        printf("The strings are equel.\n");
     } else {
        printf("The strings sre not equel.\n");
     }

     return 0;
}