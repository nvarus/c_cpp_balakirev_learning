/**
 * Используя вложенные циклы (любые), вывести в консоль из звездочек (*) следующую фигуру
 */

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1, ast = 1; i <= n; i++, ast += 2) {

        // цикл для печати пробелов
        for (int p = n - i; p > 0; p--) {
            printf(" ");
        }

        // цикл для печати звездочек
        for (int j = 0; j < ast; j++) {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}
