#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, i;

    // Take size from user
    printf("Enter size of arrays: ");
    scanf("%d", &N);

    // Declare Variable Length Arrays
    char arr_char[N];
    int arr_int[N];
    long long int arr_ll[N];

    // Initialize random seed
    srand(time(0));

    // Fill arrays with random values
    for(i = 0; i < N; i++) {
        arr_char[i] = rand() % 26 + 'A';      // Random uppercase letter
        arr_int[i] = rand() % 100;            // Random int (0-99)
        arr_ll[i] = rand() % 1000;            // Random long long (0-999)
    }

    // Pointer declarations
    char *p_char = arr_char;
    int *p_int = arr_int;
    long long int *p_ll = arr_ll;

    printf("\n--- CHAR ARRAY ---\n");
    for(i = 0; i < N; i++) {
        printf("Address: %p, Value: %c\n", (p_char + i), *(p_char + i));
    }

    printf("\n--- INT ARRAY ---\n");
    for(i = 0; i < N; i++) {
        printf("Address: %p, Value: %d\n", (p_int + i), *(p_int + i));
    }

    printf("\n--- LONG LONG INT ARRAY ---\n");
    for(i = 0; i < N; i++) {
        printf("Address: %p, Value: %lld\n", (p_ll + i), *(p_ll + i));
    }

    return 0;
}

/*
EXPLANATION:

Pointer arithmetic depends on the data type of the pointer.

When we do (p + i), the pointer moves i positions forward,
but the size of each step depends on the type:

- For char pointer:
  size = 1 byte
  So (p_char + 1) moves 1 byte forward

- For int pointer:
  size = 4 bytes (usually)
  So (p_int + 1) moves 4 bytes forward

- For long long int pointer:
  size = 8 bytes (usually)
  So (p_ll + 1) moves 8 bytes forward

That is why addresses increase differently for each array type.

Example:
If base address = 1000
char:        1000, 1001, 1002 ...
int:         1000, 1004, 1008 ...
long long:   1000, 1008, 1016 ...

This is handled automatically by the compiler.
*/
