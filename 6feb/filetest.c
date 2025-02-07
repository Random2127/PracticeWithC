#include <stdio.h>

int main()
{

    FILE *pF = fopen("haha.txt", "w");

    char input[100];
    printf("Enter text until you write STOP\n");

    fprintf(pF, input);

    while (fgets(input, 100, stdin) != NULL)
    {
        if (fgets(input, 100, stdin) != "STOP")
        {
            fprintf(pF, input);
        }
        else
        {
            break;
        }
    }

    fclose(pF);

    return 0;
}
