#include<stdio.h>
void processArray(int Arr[],int n){
	int i;
	int sum=0;
	for(i=0;i<n;i++){
		sum=sum+Arr[i];
	}
	int max=Arr[0];
	int secondmax=Arr[0];
	for(i=0;i<n;i++){
		if(Arr[i]>max){
			secondmax=max;
			max=Arr[i];
		}
		else if(Arr[i]>secondmax && Arr[i]!=max){
			secondmax=Arr[i];
		}	
	}
	printf("Sum of Array:%d\n",sum);
	printf("Second Max:%d\n",secondmax);
}
int main(){
	int n,i;
	printf("Size of Array:");
	scanf("%d",&n);
	int Arr[n];
	printf("Enter Array Elements:");
	for(i=0;i<n;i++){
		scanf("%d",&Arr[i]);
	}
	processArray(Arr, n);
    return 0;	
}



