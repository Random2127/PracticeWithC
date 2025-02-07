#include <stdio.h>
#include <string.h>

void reversing(char *input)
{
    size_t len = strlen(input);

    if (input[len - 1] == '\n')
    {
        input[len - 1] = '\0';
        len--;
    }

    char *start = input;
    char *end = input + len - 1;
    char temp;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char input[50];

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);

    reversing(input);

    printf("Your reversed sentence: %s\n", input);

    return 0;
}