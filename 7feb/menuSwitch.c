#include "numberGuessing.h"
#include <stdio.h>

enum Menu
{
    START = 1,
    SETTINGS,
    EXIT
};

void getAttempts(int attempts)
{
    printf("Enter number of attempts: ");
    scanf("%d", &attempts);
    if (attempts < 5)
    {
        printf("Minimun number of attempts is 5.\n");
        attempts = 5;
    }
    startNumber(attempts);
}

int main()
{
    int option;
    int attempts = 5;

    do
    {
        printf("=== MENU ===\n");
        printf("%d. Start\n", START);
        printf("%d. Settings\n", SETTINGS);
        printf("%d. Exit\n", EXIT);
        printf("Choose one: ");

        scanf("%d", &option);

        switch (option)
        {
        case START:
            printf("Start\n");
            startNumber(attempts);
            break;
        case SETTINGS:
            printf("Settings\n");
            getAttempts(attempts);
            break;
        case EXIT:
            printf("Bye!!\n");
            break;

        default:
            printf("Option not available.\n");
            break;
        }
    } while (option != 3);

    return 0;
}