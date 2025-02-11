#include "todo.h"
#include <stdio.h>

typedef struct
{
    int taskNum;
    char description[50];
} task;

enum menu
{
    EXIT = 0,
    ADD,
    LIST,
    TICK,
    DELETE,
    SAVE,
    LOAD
};

int main()
{
    int option;
    do
    {
        printf("=======Menu=======\n");
        printf("1. Add task\n");
        printf("2. List tasks\n");
        printf("3. Mark as done\n");
        printf("4. Delete task\n");
        printf("5. Save to file\n");
        printf("6. Load from file\n");
        printf("0. Exit\n");
        printf("=================\n");

        printf("Option: ");
        scanf("%d", &option);

        // createFile(); need to think about how to work this around
        switch (option)
        {
        case EXIT:
            printf("Goodbye!\n");
            break;
        case ADD:
            addTask();
            break;
        case LIST:
            listTasks();
            break;
        case TICK:
            tickDone();
            break;
        case DELETE:
            deleteTask();
            break;
        case SAVE:
            save();
            break;
        case LOAD:
            load();
            break;
        default:
            printf("Option not available. \n");
            break;
        }
    } while (option != 0);

    return 0;
}