#include <stdio.h>

void reverse(int *arr, int size) {
	int i;
    for ( i = 0; i < size / 2; i++) {
        int temp = *(arr + i);          // get element from start
        *(arr + i) = *(arr + size - 1 - i); // swap with element from end
        *(arr + size - 1 - i) = temp;       // complete swap
    }
}

int main() {
    int arr[10];
    int i;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", arr + i); // pointer style input

    printf("Original array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", *(arr + i)); // pointer style output
    printf("\n");

    reverse(arr, 10);

    printf("Reversed array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", *(arr + i));
    printf("\n");

    return 0;
}
