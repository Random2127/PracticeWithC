#include <stdio.h>

int main () {
    int b = 100;
    int *ptrB = &b;
    *ptrB = 50;
    printf("New value of b is: %d\n", *ptrB);
 
    return 0;
}