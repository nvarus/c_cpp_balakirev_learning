#include <stdio.h>

int main(void) {
    char a;
    char *ptr_a = &a;
    int *int_ptr_a = ptr_a;
    *int_ptr_a = 0;

    printf("int_ptr_a: address = %p, value = %d\n", int_ptr_a, *int_ptr_a);
    printf("ptr_a: address = %p, value = %d\n", ptr_a, *ptr_a);


}
