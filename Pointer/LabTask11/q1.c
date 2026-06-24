//Q1:(a)
//The values of j and k are not swaped because in swap function we have passed their values as arguments. we have not passed their addresses.so the swap function 
//doesnot approaches to the values stored in j and k so unable to swap them.if we have passed addresses of j and k as arguments in swap functions there values were swaped.// 
//B:
#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int j=2,k=5;
	printf("j=%d ,k=%d",j,k);
	swap(&j,&k);
	printf("\nAfter swap:\n");
	printf("j=%d,k=%d",j,k);
	return 0;
}
