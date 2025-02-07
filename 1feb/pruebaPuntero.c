#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x; // ptr points to x

    printf("Address of x: %p\n", ptr);
    printf("Value of x: %d\n", *ptr);

    *ptr = 20; // Changing the value of x through the pointer
    printf("New value of x: %d\n", x);

    return 0;
}

