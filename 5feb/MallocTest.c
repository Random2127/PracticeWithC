#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Input a number: ");
    scanf("%d", &number);

    int *arr = (int *)malloc(number * sizeof(int));
    if (arr == NULL)
    {
        printf("Allocation failed\n");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Input a number for the array: ");
        scanf("%d", &arr[i]);
    }

    printf("Elements in the array:\n");
    for (int i = 0; i < number; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}