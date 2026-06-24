#include<stdio.h>
int filter(int *arr,int size){
	
	int *validptr=arr;
	int *checkptr;
	
	for( checkptr = arr ; checkptr < arr+size ; checkptr++){
		if(*checkptr>=20){
		*validptr=*checkptr;
		validptr++;
	}
	}
	return validptr-arr;
}
int main(){
	int temperature[10];
	int i;
	printf("Enter 10 temperature values:\n");
	for(i=0;i<10;i++){
		scanf("%d",&temperature[i]);
	}
	int newsize=filter(temperature,10);
	printf("Filtered Values are:\n");
	for(i=0;i<newsize;i++){
		printf("%d ",temperature[i]);
	}
	printf("\n");
	printf("new effective size:%d",newsize);
	return 0;
}


