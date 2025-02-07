#include <stdio.h>

int doubleValue(int *a)
{
    *a = *a * 2;
}

int main()
{
    int x = 5;

    doubleValue(&x);
    printf("%d\n", x);

    return 0;
}