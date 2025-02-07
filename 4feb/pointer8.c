#include <stdio.h>

void reverseArray(int *arr, int size)
{
    int *start = arr;           // Pointer to first element
    int *end = arr + size - 1;  // Pointer to last element

    while (start < end)  // Swap until pointers meet in the middle
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;  // Move forward
        end--;    // Move backward
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Get array size

    printf("Before: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    reverseArray(arr, size);

    printf("After: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
