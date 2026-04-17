/**
* Напишите программу, которая считывает из входного потока stdin вещественное число.
* Если его целая часть кратна 5, то в консоль следует вывести число 1, иначе - число 0.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int num;
    scanf("%d", &num);
    bool flag = (int)num % 5 == 0;
    printf("%d", flag);
    printf("Привет, кодировка utf-8");
    return 0;
}
