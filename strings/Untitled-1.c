#include <stdio.h>
#include <string.h>

int main() {
    char secretWord[50];
    int tries = 6;
    int correctGuesses = 0;
    char guess;

    printf("Player 1, enter the secret word or phrase: ");
    
    // fgets(array, size, source)
    fgets(secretWord, sizeof(secretWord), stdin);

    // REMOVE THE NEWLINE: fgets keeps the '\n' from the Enter key
    // strcspn finds the index of the first '\n' so we can replace it with '\0'
    secretWord[strcspn(secretWord, "\n")] = '\0';

    int length = strlen(secretWord);
    char mask[length + 1];

    // Initialize mask (treating spaces as already "found")
    for (int i = 0; i < length; i++) {
        if (secretWord[i] == ' ') {
            mask[i] = ' ';
            correctGuesses++; 
        } else {
            mask[i] = '_';
        }
    }
    mask[length] = '\0';

    // Clear screen (simple method)
    for(int i = 0; i < 50; i++) printf("\n");

    while (tries > 0 && correctGuesses < length) {
        printf("\nWord: %s", mask);
        printf("\nTries left: %d", tries);
        printf("\nEnter your guess: ");
        scanf(" %c", &guess);

        int found = 0;
        for (int i = 0; i < length; i++) {
            if (secretWord[i] == guess && mask[i] == '_') {
                mask[i] = guess;
                correctGuesses++;
                found = 1;
            }
        }

        if (found) printf("Yes!\n");
        else {
            printf("No!\n");
            tries--;
        }
    }

    if (correctGuesses == length) printf("\nVictory! Word: %s\n", secretWord);
    else printf("\nDefeat! Word: %s\n", secretWord);

    return 0;
}