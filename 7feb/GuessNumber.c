#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random;
    int guess;
    int attempts = 0;

    srand(time(0));
    random = rand() % 100 + 1;

    do
    {
        printf("Enter a number between 1 and 100: ");
        scanf("%d", &guess);
        attempts++;

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

    } while (guess != random);
    printf("You have needed %d attempts to find it\n", attempts);

    return 0;
}