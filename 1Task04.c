#include <stdio.h>
int main (){
    int a = 9;
    int b = 4;
    int res;
    res = (a*a*a)-(b*b*b)-3*(a)*(b)*(a-b);
    printf("the result for (a-b)^3 is: %d", res);
    return 0;
}