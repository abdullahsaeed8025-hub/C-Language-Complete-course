#include<stdio.h>
int main(){
    float sal;
    float tax;
    printf("enter salary:");
    scanf("%f",&sal);
    if(sal<=10000){
        printf("no tax");
    }
    else if(sal>10000 && sal<=20000)y
    {
        tax=(0.10*sal);
    printf("tax %f",tax);
   }
   else if(sal>20000 && sal<=30000)
   {
    tax=(0.20*sal);
    printf("tax %f",tax);
   }
   else
   {
    tax=(0.25*sal);
    printf("tax %f", tax);
   }
   return 0;    
    
}