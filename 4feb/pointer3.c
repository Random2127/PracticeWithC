#include <stdio.h>

int swap (int *z, int *x) {
    int temp = *z;   
    *z = *x;
    *x = temp;
}
int main () {
    int a = 1, b =2;
    int *ptrA = &a, *ptrB = &b;
    
    swap (ptrA, ptrB);
    

    return 0;
}