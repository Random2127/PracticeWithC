#ifndef NUMBER_GUESSING_H
#define NUMBER_GUESSING_H

void startNumber(int attempts);

#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void startNumber(int attempts)
{
    int random;
    int guess;

    srand(time(0));
    random = rand() % 100 + 1;

    do
    {
        printf("Enter a number between 1 and 100: ");
        scanf("%d", &guess);
        attempts--;

        if (guess < random)
        {
            printf("Too low.\n");
        }
        else if (guess > random)
        {
            printf("Too high.\n");
        }
        else
        {
            printf("Congratulations!! You have guessed the random number");
            break;
        }

    } while (guess != random && attempts > 0);
    printf("You have %d attempts left\n", attempts);
}
