#include <stdio.h>

int main()
{

    int num = 10;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;

    printf("Address of num: %p\n", &num);
    printf("Value of num: %d\n", num);

    printf("\nPointer ptr1 holds address: %p\n", ptr1);
    printf("Value at ptr1 (*ptr1): %d\n", *ptr1);

    printf("\nPointer ptr2 holds address of ptr1: %p\n", ptr2);
    printf("Value at ptr2 (*ptr2, which is ptr1): %p\n", *ptr2);
    printf("Value at **ptr2 (which is num): %d\n", **ptr2);

    return 0;
}
