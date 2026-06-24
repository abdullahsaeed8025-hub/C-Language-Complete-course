#include <stdio.h>
#include <string.h>

int main() {
    char secretWord[50];
    char guessBuffer[10]; // Buffer to read the guess line
    char guess;
    int tries = 6;
    int correctGuesses = 0;

    // 1. Get Secret Word
    printf("Player 1, enter the secret word: ");
    fgets(secretWord, sizeof(secretWord), stdin);
    
    // Remove the newline character caught by fgets
    secretWord[strcspn(secretWord, "\n")] = '\0';

    int length = strlen(secretWord);
    char mask[length + 1];

    // 2. Setup Mask
    for (int i = 0; i < length; i++) {
        mask[i] = (secretWord[i] == ' ') ? ' ' : '_';
        if (secretWord[i] == ' ') correctGuesses++;
    }
    mask[length] = '\0';

    // Clear screen so Player 2 can't see the word
    for(int i = 0; i < 50; i++) printf("\n");

    // 3. Game Loop
    while (tries > 0 && correctGuesses < length) {
        printf("\nWord: %s", mask);
        printf("\nTries left: %d", tries);
        printf("\nEnter your guess: ");

        // Use fgets for the guess to keep the buffer clean
        fgets(guessBuffer, sizeof(guessBuffer), stdin);
        guess = guessBuffer[0]; 

        int found = 0;
        for (int i = 0; i < length; i++) {
            // Check if letter matches and hasn't been uncovered yet
            if (secretWord[i] == guess && mask[i] == '_') {
                mask[i] = guess;
                correctGuesses++;
                found = 1;
            }
        }

        if (found) {
            printf("Correct!\n");
        } else {
            printf("Wrong! '%c' is not there.\n", guess);
            tries--;
        }
    }

    // 4. Result
    if (correctGuesses == length) {
        printf("\nCongratulations! Word: %s\n", secretWord);
    } else {
        printf("\nGame Over! The word was: %s\n", secretWord);
    }

    return 0;
}