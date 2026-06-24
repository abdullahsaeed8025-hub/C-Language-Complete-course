#include<stdio.h>
int main(){
    int a = 16 ,b = 8,c = 13;
    if(a <= b && a <= c){
        if(b <= c)
        printf("%d %d %d\n", a,b,c);
        else
        printf("%d %d %d\n",a,c,b);
    }
    else if(b <= a && b <= c){
        if(a <= c)
        printf("%d %d %d\n", b,a,c);
        else
        printf("%d %d %d\n", b,c,a);
    }
    else{
        if(a <= b)
        printf("%d %d %d\n", c,a,b);
        else
        printf("%d %d %d\n", c,b,a);VS
    }
    return 0;
}
    
