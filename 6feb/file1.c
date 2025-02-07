#include <stdio.h>
#include <string.h>

int main()
{

    char path[20];
    printf("Write the name of the file: ");
    scanf("%s", path);
    getchar();

    FILE *pF = fopen(path, "w");
    if (pF == NULL)
    {
        printf("Error opening file. \n");
        return 1;
    }

    char input[100];
    printf("Enter text until you write STOP\n");

    while (1)
    {
        fgets(input, 100, stdin);
        // Remove newline character from input
        input[strcspn(input, "\n")] = 0;
        if (strcmp(input, "STOP") == 0)
        {
            break;
        }

        fprintf(pF, "%s\n", input);
    }

    fclose(pF);
    printf("Text saved in %s\n", path);

    // Reopen file and read
    printf("Reading the file: \n");
    FILE *pRF = fopen(path, "r");
    {
        printf("Error reopening file for reading.\n");
        return 1;
    }
    char buffer[255];

    while (fgets(buffer, 255, pRF))
    {
        printf("%s", buffer);
    }

    fclose(pRF);
    return 0;
}
