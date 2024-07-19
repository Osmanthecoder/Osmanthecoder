#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    char playAgain;

    // start up	 random number generator
    srand(time(0));

    do {
        // Generate random number between 1 and 100
        number = rand() % 100 + 1;
        attempts = 0;
        printf("I have selected a number between 1 and 100.\n");

        // Game loop
        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < number) {
                printf("Too low! Try again.\n");
            } else if (guess > number) {
                printf("Too high! Try again.\n");
            } else {
                printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            }
        } while (guess != number);

        // Ask the user if they want to play again
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thank you for playing!\n");
    return 0;
}
