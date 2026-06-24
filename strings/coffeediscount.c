#include<stdio.h>
int calculateDiscount(float Amount,int visits){
	float discount=0;
    if(visits>10 && Amount>=50){
    	discount=Amount*0.15;
	}
	else if(visits>5 && Amount>=30){
		discount=Amount*0.10;
	}
	else{
		discount=0;
	}
	return discount;
}
int main(){
	float Amount,discount;
	int visits;
	printf("Enter Total Purchase Amount:");
	scanf("%f",&Amount);
	printf("Enter Total Visits in the Past Month:");
	scanf("%d",&visits);
	discount=calculateDiscount(Amount,visits);
	printf("Discount amount:%.2f\n",discount);
	return 0;
}


