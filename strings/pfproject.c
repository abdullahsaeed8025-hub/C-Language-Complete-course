#include <stdio.h>
#include <string.h>

int main() {
    char secretWord[] = "programming";
    int length = strlen(secretWord);
    char mask[length + 1];
    int tries = 6;
    int correctGuesses = 0;
    char guess;

    // Initialize the mask with underscores
    for (int i = 0; i < length; i++) {
        mask[i] = '_';
    }
    mask[length] = '\0'; // Null terminator for strings

    printf("Welcome to Hangman!\n");

    while (tries > 0 && correctGuesses < length) {
        printf("\nWord: %s", mask);
        printf("\nTries left: %d", tries);
        printf("\nEnter your guess: ");
        scanf(" %c", &guess); // Note the space before %c to catch the newline character

        int found = 0;
        for (int i = 0; i < length; i++) {
            // Check if guess matches a letter and hasn't been guessed yet
            if (secretWord[i] == guess && mask[i] == '_') {
                mask[i] = guess;
                correctGuesses++;
                found = 1;
            }
        }

        if (found) {
            printf("Good job! '%c' is in the word.\n", guess);
        } else {
            printf("Sorry, '%c' is not there.\n", guess);
            tries--;
        }
    }

    // End of game check
    if (correctGuesses == length) {
        printf("\nCongratulations! You won! The word was: %s\n", secretWord);
    } else {
        printf("\nGame Over! You ran out of tries. The word was: %s\n", secretWord);
    }

    return 0;
}