#include<stdio.h>
int main(){
    int consumer_type;
    float bill;
    int units;
    int left_unit;

    //Consumer Type selection
    printf("Enter Consumer Type:\n 1: Domestic\n 2: Commercial\n 3:Industrial\n ");
    printf("Please select the consumer type: ");
    scanf("%d", &consumer_type );

    printf("Enter Units Consumed:");
    scanf("%d", &units);

    switch(consumer_type){

    case 01://Domestic
    if(units<=100)
    printf("The bill is : %d", units*5);
    else if(units <= 300){
    left_unit=units-100;
    printf("The bill is:%d", (100*5)+(left_unit*7) );}
    else if(units > 300){
    left_unit=units-300;
    printf("The bill is:%d", (100*5)+(200*7)+(left_unit*10));}
    break;

    case 02://Commercial
    if(units<=200)
    printf("The bill is:%d",units*8);
    else if(units>=500){
    left_unit=units-200;
    printf("The bill is:%d",(200*8)+(left_unit*12));}
    else if(units > 500){
    left_unit= units-500;
    printf("The bill is:%d",(200*8)+(500*12)+(left_unit*15));
    break;
    }

    case 03://Industrial
    if(units <= 500){
    printf("The bill is:%d",units*15);
    }
    else if(units>500 && units<=1000){
    left_unit= units-500;
    bill = (500*15)+(left_unit*20);
    printf("The bill is:%.2f",bill);}
     
    else if(units>1000){
    left_unit= units-500;
    bill = (500*15)+(left_unit*20);
    printf("%.2f", bill + (0.10*bill));
      break;}

    default:
    printf("invalid input");

     }
    return 0;

     }