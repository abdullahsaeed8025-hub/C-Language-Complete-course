#include <stdio.h>

int main() {
    int num;          // integer variable
    int *ptr1;        // pointer to integer
    int **ptr2;       // pointer to pointer

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Initialize pointers
    ptr1 = &num;
    ptr2 = &ptr1;

    // Print actual value of integer
    printf("Original value of num: %d\n", num);

    // Change value using ptr2
    **ptr2 = 100;  // changing value to 100

    // Print new value of integer
    printf("New value of num: %d\n", num);

    return 0;
}
