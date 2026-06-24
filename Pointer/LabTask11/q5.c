#include <stdio.h>


int filterTemps(int *ptr, int size) {
    int *writePtr = ptr;  
    int *readPtr = ptr;    

    int i;
    for(i = 0; i < size; i++) {
        
        if(*(readPtr + i) >= 20) {
            *writePtr = *(readPtr + i);  
            writePtr++;                
        }
    }

    
    return writePtr - ptr;
}

int main() {
    int temps[10] = {15, 22, 18, 30, 25, 10, 40, 19, 21, 35};
    int size = 10, i;

    
    int newSize = filterTemps(temps, size);

    
    printf("Filtered Temperatures (>=20):\n");
    for(i = 0; i < newSize; i++) {
        printf("%d ", *(temps + i));   
    }

    printf("\nNew Size: %d\n", newSize);

    return 0;
}
