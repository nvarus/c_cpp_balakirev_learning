/**
 * Продолжите программу. Необходимо проверить, что биты 3 и 5 переменной bits включены (установлены в 1).
 * Если это так, то выведите в консоль значение переменной bits в виде целого десятичного числа,
 * иначе целое число -1.
*/

#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);
                                // 10100101
    unsigned char mask = 40;    // 00101000
    printf("%d", ((bits & mask) == mask) ? bits : -1);
    // printf("%d", bits & mask);
    return 0;
}