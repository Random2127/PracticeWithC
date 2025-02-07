#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char input[50];

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);

    size_t len = strlen(input);
    if (input[len - 1] == '\n')
    {
        input[len - 1] = '\0';
        len--;
    }

    char *duplicate = (char *)malloc((len + 1) * sizeof(char));
    if (duplicate == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    strcpy(duplicate, input);

    printf("Copy: %s\n", duplicate);

    free(duplicate);
    return 0;
}