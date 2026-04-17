/**
* Напишите программу, которая считывает из входного потока stdin целое число и выводит в консоль значение 100,
* если число кратно 5, и 0 в противном случае.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int num;
    scanf("%d", &num);
    bool flag = num % 5 == 0;
    printf("%d", 100 * flag);
    return 0;
}
