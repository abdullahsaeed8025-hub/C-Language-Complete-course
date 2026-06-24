#include <stdio.h>


void processMarks(int *ptr, int size) {
    int *start = ptr;
    int *end = ptr + size;

    int sum = 0;


    while(ptr < end) {
        sum += *ptr;
        ptr++;
    }

    float avg = (float)sum / size;
    printf("Average = %.2f\n", avg);

    
    ptr = start; 

    while(ptr < end) {
        if(*ptr < avg) {
            *ptr = *ptr + 5;
        }
        ptr++;
    }
}

int main() {
    int marks[6] = {40, 55, 60, 30, 80, 50};
    int size = 6;

    int *ptr = marks;

    printf("Original Marks:\n");
    while(ptr < marks + size) {
        printf("%d ", *ptr);
        ptr++;
    }


    processMarks(marks, size);

    printf("\nUpdated Marks:\n");
    ptr = marks;  
    while(ptr < marks + size) {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}

