/**
 * Инвертируйте все биты переменной b и сохраните результат в переменной not_b.
 * Выведите в консоль значение переменной not_b в виде целого десятичного числа.
 */


#include <stdio.h>

int main(void)
{
    unsigned char b;
    scanf("%hhu", &b);
    unsigned char not_b = ~b;
    printf("%d", not_b);
    return 0;
}