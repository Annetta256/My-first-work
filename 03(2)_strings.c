#include <stdio.h>
#include <stdlib.h> // Для system
#include <unistd.h> // Для sleep/usleep

int main(void) {
    int total = 50; // Ширина "бара"
    for (int i = 0; i <= total; i++) {
        // Очищаємо екран
        // system("cls") для Windows або system("clear") для Linux/macOS

        system("clear");
        // printf("\033[H\033[]");

        // Виводимо "прогрес"
        printf("Progress: [");
        for (int j = 0; j < total; j++) {
            if (j < i) {
                putchar('#');
            } else {
                putchar(' ');
            }
        }
    }
    return 0;
}