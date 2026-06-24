#include<stdio.h>
int isprime(int n){
	int i;
	if(n<=1)
	return 0;
	for(i=2;i<n;i++){
	if(n%i==0)
	return 0;
}	
	return 1;
	}
int main(){
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
 isprime(num);
 if(isprime(num)==0)
 printf("not prime");
 else{
 	printf("prime");
 }
return 0;	
}	



