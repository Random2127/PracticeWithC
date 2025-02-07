#include <stdio.h>
// Create a Function to Find the Maximum of Two Numbers

int *findMax(int *a, int *b)
{
    return (*a > *b) ? a : b;
}

int main()
{
    int a = 4, b = 6;
    int *maxPtr = findMax(&a, &b);
    printf("The highest number is: %d\n", *maxPtr);
    return 0;
}