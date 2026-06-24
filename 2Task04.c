#include <stdio.h>
int main(){
    int total_seconds = 3700;
    int hours, minutes, seconds;

    // Calculate hours
    hours = total_seconds / 3600;

    // Calculate remaining minutes and seconds
    int remaining_seconds = total_seconds % 3600;
    minutes = remaining_seconds / 60;

    // Calculate final seconds
    seconds = remaining_seconds % 60;

    printf("%d secconds = %d hours %d minutes %d seconds\n", total_seconds,hours, minutes, seconds);
    return 0;
}