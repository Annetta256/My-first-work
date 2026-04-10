#include <stdio.h>

/**
* @brief Функція обчислює суму двох цілих чисел.
*
*@param a Ціле число.
*@param b Ціле число.
*@return int сума a + b.
*/
int add(int a, int b) {
    return a + b;
} // Function dectaration

/**
* @brief Головна функція програми.
*
* @return int Статус виконання програми.
 */
 int main(void) {
    // Виведемо повідомлення у консоль:
    printf("Hello,World!\n");

    int a = 10; // Це не визначено, але програма все одно скомпілюється
    int b = 20;  // Це не визначено, але програма все одно скомпілюється

    int c = add(a, b); // Це не визначено, але програма все одно скомпілюється

    printf("The sum of %d and %d is %d\n", a, b, c);

    return 0;
 }


// int debug_made = 1; // Поки що не будемо використовувати