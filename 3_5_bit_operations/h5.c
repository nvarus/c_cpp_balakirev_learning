/**
 * Продолжите программу. Необходимо выключить 7 и 6 биты переменной bits (установить в 0).
 * Результат сохраните в байтовой беззнаковой переменной res и выведите ее значение в консоль
 * в виде целого десятичного числа.
 */

#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);
    unsigned char mask = 0b00111111;
    unsigned char res = (bits & mask);
    printf("%hhu", res);
    return 0;
}