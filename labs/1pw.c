#include <stdio.h>

int main (void) {
    printf ("Анна Бриленко\n");  // це printf виводить моє ім'я 
    printf ("Я вивчаю мову С\n"); // виводить в терміналі факт про мене 
    printf ("Практична робота № 1\n"); // в терміналі третім рядком буде "Практична робота №1"

    char symbol = 'A', number = 65, second = symbol + 1;
    printf ("Символ: %c\n", symbol);
    printf ("ASCII-код: %d\n", number);
    printf ("Наступний символ: %c\n", second);

    return 0;
}