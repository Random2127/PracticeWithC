#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[50];
    float grade;
} Student;

int main()
{
    int numbersts;

    printf("How many students do you want to create?: ");
    scanf("%d", &numbersts);
    while (getchar() != '\n'); // Clears the newline left by scanf

    Student *students = malloc(numbersts * sizeof *students);
    if (students == NULL)
    {
        fprintf(stderr, "Memory allocation error.\n");
        return 1;
    }

    for (int i = 0; i < numbersts; i++)
    {
        printf("Enter student's name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';// Remove trailing newline

        printf("Enter student's grade: ");
        scanf("%f", &students[i].grade);
        while (getchar() != '\n');  // Clears leftover input

    }

    for (int i = 0; i < numbersts; i++)
    {
        printf("Student name: %s. Grade: %.2f\n", students[i].name, students[i].grade);
    }

    free(students);
    return 0;
}