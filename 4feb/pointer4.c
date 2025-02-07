#include <stdio.h>

void swap(int *z, int *x) {
    printf("Before swap: *z = %d, *x = %d\n", *z, *x);
    
    int temp = *z;
    *z = *x;
    *x = temp;

    printf("After swap: *z = %d, *x = %d\n", *z, *x);
}


int main () {
    int a = 1, b =2;
    int *ptrA = &a, *ptrB = &b;
    
    swap (ptrA, ptrB);
    

    return 0;
}