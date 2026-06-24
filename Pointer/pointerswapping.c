#include<stdio.h>
void swapminmax(int *arr, int size){
	int *maxptr=arr;
	int *minptr=arr;
	int *ptr;
	for(ptr=arr;ptr<arr+size;ptr++){
		if(*ptr>*maxptr){
			maxptr=ptr;
		}
		if(*ptr<*minptr){
			minptr=ptr;
		}
	}
	int temp=*maxptr;
	*maxptr=*minptr;
	*minptr=temp;
}
int main(){
	int scores[10];
	int i;
	printf("Enter 10 student scores:\n");
	for(i=0;i<10;i++){
		scanf("%d",&scores[i]);
	}
	swapminmax(scores,10);
	printf("After Swapping Values:\n");
	for(i=0;i<10;i++){
		printf("%d ",scores[i]);
	}
	return 0;
}


