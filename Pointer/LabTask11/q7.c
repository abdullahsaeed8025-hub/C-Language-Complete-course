#include <stdio.h>


void reverseArray(int *start, int size) {
    int *end = start + size - 1;  

    while(start < end) {
        
        int temp = *start;
        *start = *end;
        *end = temp;

        
        start++;
        end--;
    }
}

int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    int *ptr = arr;

    printf("Original array:\n");
    while(ptr < arr + size) {
        printf("%d ", *ptr);
        ptr++;
    }

    
    reverseArray(arr, size);

    printf("\n\nReversed array:\n");
    ptr = arr;  
    while(ptr < arr + size) {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}
