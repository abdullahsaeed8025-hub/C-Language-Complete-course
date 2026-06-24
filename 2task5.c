#include <stdio.h>
#define START "STUDENT GRADE REPORT"
#define NAME   "Abdullah Saeed"
#define COURSE "Programming Fundamentals"
int main(){
float gpa = 4.0;
char grade = 'A';

    printf("----------------------------------------------\n");
    printf("\t\t"START"\n");
    printf("-----------------------------------------------\n");
    printf("Name:\t\t");
    printf("%30s\n", NAME);
    printf("Course\t\t|");
    printf("%30s\n", COURSE);
    printf("GPA\t\t|");
    printf("%30.1f\n", gpa);
    printf("Grade\t\t|%30c\n", grade);

    printf("------------------------------------------------\n");
    return 0;
}