#include<stdio.h>
int decidecarusage(int carnum,int day){
	
	if(carnum%2==day%2){
	return 1;
	}
	else{
		return 0;
	}
}	
int main(){
	int carnum,day;
	printf("Enter Car number digits:");
	scanf("%d",&carnum);
	printf("Enter Day of week(1-7):");
	scanf("%d",&day);
	int result=decidecarusage(carnum,day);
	if(result==1)
	printf("You can use the car %d on day %d:",carnum,day);
	else{
		printf("you can not use car %d on day %d:",carnum,day);
	}
	return 0;
}


