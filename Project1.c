#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, guess;
    int no_guesses = 0;

    srand(time(0));
    randomNumber = (rand() % 100) + 1;

    do
    {
        printf("Enter your guess (between 1 and 100): ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 100)
        {
            printf("Invalid input! Guess must be between 1 and 100.\n");
            continue;
        }

        no_guesses++;

        if (guess > randomNumber)
        {
            printf("Too high! Try again.\n");
        }
        else if (guess < randomNumber)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf(" Congratulations! You guessed the number %d in %d attempts.\n", randomNumber, no_guesses);
        }

    } while (guess != randomNumber);
    printf(" GAME OVER!!\n Thank you for playing!\n");

    return 0;
}
