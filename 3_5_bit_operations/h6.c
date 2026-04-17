/**
 * Продолжите программу. Необходимо включить 4, 2 и 0 биты переменной bits (установить в 1).
 * Результат сохраните в байтовой беззнаковой переменной res и выведите ее значение
 * в консоль в виде целого десятичного числа.
*/

#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    unsigned char mask = 0b00010101;
    unsigned char res = bits | mask;
    printf("%hhu", res);
    return 0;
}