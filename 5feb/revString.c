#include <stdio.h>
#include <string.h>

void reverseString(char *input)
{
    char *fptr = input;
    char *lptr = input + strlen(input) - 1;

    while (fptr < lptr)
    {
        char temp = *fptr;
        *fptr = *lptr;
        *lptr = temp;

        fptr++;
        lptr--;
    }
}

int main()
{
    char input[12];

    printf("Input any word: ");
    scanf("%11s", input);
    printf("Before reverse: %s\n", input);

    reverseString(input);

    printf("After reverse: %s\n", input);

    return 0;
}