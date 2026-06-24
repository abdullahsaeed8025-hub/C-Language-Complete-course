#include<stdio.h>
int main(){
	int arr[]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	int *start=arr;
	int *end=arr+size-1;
	while(start<end){
		int temp=*start;
		*start=*end;
		*end=temp;
		start++;
	    end--;
	}
	int *ptr=arr;
	while(ptr<arr+size){
	   printf("%d ",*ptr);
	   ptr++;
	}
	return 0;
}


