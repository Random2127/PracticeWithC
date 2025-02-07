#include <stdio.h>
#include <string.h>

int main()
{

    char original[50];
    char copy[50];
    char buffer[255];

    printf("Name of the file you want to copy: ");
    scanf("%s", original);
    getchar();
    FILE *pOF = fopen(original, "r");
    if (pOF == NULL)
    {
        printf("File not found. ");
        return 1;
    }
    // If file exists: overwrite or append?

    printf("Name of the file to copy to: ");
    scanf("%s", copy);
    getchar();
    FILE *pCF = fopen(copy, "w");
    if (pCF == NULL)
    {
        printf("Failed to create the file.\n");
        fclose(pOF);
        return 1;
    }

    while (fgets(buffer, 255, pOF) != NULL)
    {
        fprintf(pCF, "%s", buffer);
    }

    fclose(pOF);
    fclose(pCF);
    return 0;
}