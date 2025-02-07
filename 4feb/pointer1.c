#include <stdio.h>

int main () {
    int a = 42;
    int *ptr = &a;

    printf("The address is: %p\n", ptr);
    printf("The address using &a: %p\n", &a);
    printf("The value is: %d\n", *ptr);
    return 0;
}