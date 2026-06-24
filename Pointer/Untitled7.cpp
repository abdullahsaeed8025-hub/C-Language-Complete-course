#include<stdio.h>
void printhw(int n){
	if(n==0){
		return;		// base condition
	}
	printf("Hello World\n");
	printhw(n-1);
}
int main(){
	printhw(10);
   	return 0;
}						// jo kam iteration mai hosakta hai wo recursion ma bhi ho sakta hai
						// and also vice versa.
						// jo kam iteration main 10 lines ma hota hai wo recursion sa 2 line ma hosakta hai
						// or jo kam recursion ma 10 lines hosakta wo iteration mai 2 line ma hosakta hai
