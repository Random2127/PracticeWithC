#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* description;
    int complete;  // 0 for incomplete
} Task;

enum menu { EXIT = 0, ADD, LIST, TICK, DELETE };

Task* tasks = NULL;
int length = 0;  // tracks number of tasks in array

void addTask(const char* description) {
    tasks = (Task*)realloc(tasks, (length + 1) * sizeof(Task));
    tasks[length].description =
        (char*)malloc(strlen(description) + 1);  // +1 for \0
    tasks[length].complete = 0;
    strcpy(tasks[length].description, description);
    length++;
    printf("Task added. \n");
};

void listTasks() {
    char status;
    for (int i = 0; 1 < length; i++) {
        if (tasks[i].complete == 1) {
            status = 'd';
        } else {
            status = 'n';
        }
        printf("%d. %s [%c]", i + 1, tasks[i], status);
    }
};

void tickDone(int index) {
    if (index <= length && index > 0) {
        tasks[index - 1].complete = 1;
        printf("Task is completed.\n");
    } else {
        printf("Invalid index. \n");
    }
};

void deleteTask(int index) {
    if (index <= length && index > 0) {
        index = index - 1;
        free(tasks[index].description);

        for (int i = index; i < length - 1; i++) {
            tasks[i] = tasks[i + 1];
        }

        length--;
        tasks = (Task*)realloc(tasks, (length * sizeof(Task)));
    } else {
        printf("Invalid index. \n");
    }
};

void edit(int index) {
    if (index <= length && index > 0) {
        index = index - 1;

    } else {
        printf("Invalid index. \n");
    }
};

int main() {
    int option;

    char* taskInput;
    int indexInput;
    do {
        printf("=======Menu=======\n");
        printf("1. Add task\n");
        printf("2. List tasks\n");
        printf("3. Mark as done\n");
        printf("4. Delete task\n");
        printf("0. Exit\n");
        printf("=================\n");

        printf("Option: \n\n");
        scanf("%d", &option);

        // createFile(); need to think about how to work this around
        switch (option) {
            case EXIT:
                printf("Goodbye!\n");
                break;
            case ADD:
                printf("Enter a new tasks: ");
                getchar();
                fgets(taskInput, sizeof(taskInput), stdin);
                taskInput[strcspn(taskInput, "\n")] = '\0';
                addTask(taskInput);
                break;
            case LIST:
                listTasks();
                break;
            case TICK:
                printf("Enter the index to the finished task: ");
                scanf("%d", &indexInput);
                tickDone(indexInput);
                break;
            case DELETE:
                printf("Enter the index to the task to delete: ");
                scanf("%d", &indexInput);
                deleteTask(indexInput);
                break;
            default:
                printf("Option not available. \n");
                break;
        }
    } while (option != 0);

    free(tasks);

    return 0;
}