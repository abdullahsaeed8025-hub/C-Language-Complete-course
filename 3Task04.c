#include <stdio.h>
int main(){

    int x = 5;
    
    int y = 3;
    
    int z = 5;


    //if triangle is equilateral
    (x==y && x==z) ?
    printf("Triangle is equilateral"):

    //if triangle is isoscles
    (x==y || y==z || z==x) ?

    printf("Triangle is isoscles"):
    //now if triangle is scalene
    printf("Triangle is scalene");

    return 0;

}