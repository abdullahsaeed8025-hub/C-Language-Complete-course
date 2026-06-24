//#include<stdio.h>
//
//int main(){
//	int a = 3;
//	int *ptr1; // 1st pointer
//	ptr1 = &a;
//	int **ptr2;
//	ptr2 = &ptr1;
//	printf("The actual value is : %d\n",a);
//	**ptr2 = 5;
//	printf("The changed value by ptr2 is : %d",a);
//	return 0;
//} 

#include<stdio.h>
int main(){
	int a;
	printf("a:");
	scanf("%d",&a);
	int *ptr1;
	ptr1=&a;
	int **ptr2;
	ptr2=&ptr1;
	printf("\nActual a:%d\n",a);
	**ptr2=5;
	printf("a:%d",a);
	return 0;
}
