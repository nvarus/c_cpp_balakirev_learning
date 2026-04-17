#include <stdio.h>

int main(void) {
    int p = 1;
    int n;
    int i = 2;
    scanf("%d", &n);

    do {
        p *= (n > 1) ? i : 1;
    } while (i++ < n);

    printf("%d\n", p);

    return 0;
}
