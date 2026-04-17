/**
 * апишите программу, в которой вводятся два целых неотрицательных числа в одну строчку через пробел,
 * которые заносятся в байтовые беззнаковые переменные с именами flags и mask. Необходимо проверить,
 * включены ли в переменной flags соответствующие биты переменной mask.
 */

#include <stdio.h>

int main(void) {
    unsigned char flags, mask;
    if (scanf("%hhu %hhu", &flags, &mask) != 2) {
        printf("Input error\n");
        return 1;
    }
    printf("%s", ((flags & mask) == mask) ? "yes" : "no");

    return 0;
}
