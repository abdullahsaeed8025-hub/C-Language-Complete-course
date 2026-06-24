#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int N;
	printf("Enter Size of Arrays:");
	scanf("%d",&N);
	char ch[N];
	int num[N];
	long long int nummee[N];
	srand(time(NULL));
    for(int i = 0; i < N; i++) {
        // Random uppercase letters A-Z
        ch[i] = 'A' + rand() % 26;

        // Random integers 0-99
        num[i] = rand() % 100;

        // Random long long integers
        nummee[i]=rand()%100000;                                                                                                                                                                                                                                                                              
    }
    char *charptr=ch;
    int *integptr=num;
    long long int *llptr=nummee;
    
    printf("\nChar Array\n");
	for(int i = 0; i < N; i++){
		printf("value:%c\t Address:%p\n",*(charptr+i),(void*)(charptr+i));
	}
		printf("\n");
		printf("\nInteger Array\n");
		for(int i=0;i<N;i++){
		printf("value:%d\t Address:%p\n",*(integptr+i),(void*)(integptr+i));
	}
	    printf("\n");
	    printf("\nLong Integer Array\n");
	    for(int i=0;i<N;i++){
	    printf("value:%lld\t Address:%p\n",*(llptr+i),(void*)(llptr+i));
		}		
	
	return 0;
}
