#include <stdio.h>

void swapFloats(float *a, float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    float a = 2.3, b = 4.5;
    float *ptrA = &a, *ptrB = &b;

    printf("Before Swap values: a = %.2f and b = %.2f\n", a, b);
    swapFloats(ptrA, ptrB);
    printf("Swapped values: a = %.2f and b = %.2f\n", a, b);

    return 0;
}