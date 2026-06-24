#include<Stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
 int j=2,k=5;
 printf("j=%d,k=%d",j,k);
 swap(&j,&k);
 printf("\nvalues after swap:\n");
 printf("j=%d,k=%d\n",j,k);
 return 0;
}
