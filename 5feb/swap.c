#include <stdio.h>

void swap(int *ptrA, int *ptrB)
{
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main()
{
    int a = 5, b = 10;

    printf("Before swap: a = %d and b = %d\n", a, b);
    swap(&a, &b); // Pass addresses directly
    printf("After swap: a = %d and b = %d\n", a, b);

    return 0;
}