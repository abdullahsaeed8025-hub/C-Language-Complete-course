#include <stdio.h>


void swapMinMax(int *ptr, int size) {
    int *minPtr = ptr;
    int *maxPtr = ptr;
    int *tempPtr = ptr;

    int i;

    for(i = 0; i < size; i++) {
        if(*(tempPtr + i) < *minPtr) {
            minPtr = tempPtr + i;
        }
        if(*(tempPtr + i) > *maxPtr) {
            maxPtr = tempPtr + i;
        }
    }

    
    int temp = *minPtr;
    *minPtr = *maxPtr;
    *maxPtr = temp;
}

int main() {
    int arr[6] = {45, 12, 78, 34, 9, 50};
    int size = 6, i;

    printf("Original array:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", *(arr + i));  
    }

    
    swapMinMax(arr, size);

    printf("\n\nAfter swapping Min and Max:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}

