#include <stdio.h>

enum Menu
{
    START = 1,
    SETTINGS,
    EXIT
};

int main()
{
    int option;

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
        break;
    case SETTINGS:
        printf("Settings\n");
        break;
    case EXIT:
        printf("Bye!!\n");
        break;

    default:
        printf("Option not available.\n");
        break;
    }

    return 0;
}