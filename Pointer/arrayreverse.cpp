#include<stdio.h>
void reverse(int *arr,int size){
	for(int i = 0,j=size-1; i < size/2; i++,j--){
		int temp = arr[i];
		arr[i]= arr[j];
		arr[j] = temp;  // 1 2 3 4 5 6  
	}					  // 0 1 2 3 4 5   but size is 6 
}
int main(){
	int array[10];
	for(int i = 0; i < 10; i++){
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&array[i]);
	}
	printf("Printing all the elements : \n");
	for(int i = 0; i < 10; i++){
		printf("\nThe %d element of array is : %d\n",i+1,array[i]);
	}
	printf("\n");
	reverse(array,10);
	printf("Printing all the elements after reversal : \n");
	for(int i = 0; i < 10; i++){
		printf("The %d element of array is : %d\n",i+1,array[i]);
	}
	return 0;
}


