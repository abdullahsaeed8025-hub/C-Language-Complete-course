#include <stdio.h>


int countOccurrences(int *ptr, int size, int target) {
    int count = 0;
    int *end = ptr + size;   

    while(ptr < end) {
        if(*ptr == target) {
            count++;
        }
        ptr++;   
    }

    return count;
}

int main() {
    int arr[8] = {101, 202, 101, 303, 101, 404, 202, 101};
    int size = 8;
    int target = 101;

    int result = countOccurrences(arr, size, target);

    printf("Target value: %d\n", target);
    printf("Occurrences: %d\n", result);

    return 0;
}
