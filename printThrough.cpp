#include<stdio.h>
#include<stdlib.h>

int printDyn(int *a, int n);

//input from user
int InputFromUser(int *a, int n){
	int i;
	int *s;
	s = (int *)malloc(sizeof(int)*n);
	
	for(i=0; i<n; i++){
		scanf("%d", &s[i]);
	}
	printf("\nHere would print user input array\n");
	printDyn(s,n);
}

//printDyn
int printDyn(int *a, int n){
	int i;
	for(i=0; i<n; i++){
		printf("p[%d] = %d \n", i,*(a+i));
	}
}


int main(){
	int a; 
	printf("a = ");
	scanf("%d", &a);
	int *p;
	
	InputFromUser(p, a);
	
	
	return 0;
}
