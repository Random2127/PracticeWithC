#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    // element in the array
    int elements = sizeof(arr) / sizeof(arr[0]);

    // dynamic array
    int *dynArr = (int *)malloc(elements * sizeof(int));
    if (dynArr == NULL)
    {
        printf("Allocation failed\n");
        return 1;
    }

    for (int i = 0; i < elements; i++)
    {
        *(dynArr + i) = *(arr + i);
    }

    // print original array
    for (int i = 0; i < elements; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // print copied array
    for (int i = 0; i < elements; i++)
    {
        printf("%d ", dynArr[i]);
    }
    printf("\n");

    free(dynArr);
    return 0;
}