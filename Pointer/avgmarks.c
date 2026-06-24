//#include<stdio.h>
//void average(int *ptr,int size){
//	int sum=0,i;
//	for(i=0;i<size;i++){
//		sum=sum + *ptr;
//		ptr++;
//	}
//	float avg=(float)sum/size;
//	printf("Average:%.2f",avg);
//	ptr=ptr-size;
//	for(i=0;i<size;i++){
//		if(*ptr<avg){
//			*ptr=*ptr+5;
//		}
//		ptr++;
//	}	
//}
//int main(){
//	int marks[]={40,30,50,60,70};
//	int i;
//	int size=sizeof(marks)/sizeof(marks[0]);
//	average(marks,size);
//	printf("\nUpdated marks:\n");
//	for(i=0;i<size;i++){
//		printf("%d ",marks[i]);
//	}
//	return 0;
//}

#include<stdio.h>
void average(int *ptr,int size){
	int sum=0,i;
	for(i=0;i<size;i++){
		sum=sum+*ptr;
		ptr++;
	}
	float avg=(float)sum/size;
	printf("Average:%.2f",avg);
	ptr=ptr-size;
	for(i=0;i<size;i++){
		if(*ptr<avg){
			*ptr=*ptr+5;
		}
		ptr++;
	}
}
int main(){
	int marks[5];
	int i;
	printf("array elements:\n");
	for(i=0;i<5;i++){
		scanf("%d",&marks[i]);
	}
	int size=sizeof(marks)/sizeof(marks[0]);
	average(marks,size);
	printf("\nUpdate marks:");
	for(i=0;i<5;i++){
		printf("%d ",marks[i]);
	}
	return 0;
}


