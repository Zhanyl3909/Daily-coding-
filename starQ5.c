#include<stdio.h>
#define size 	5

int main(){

	int i, j;
	
	for(i=0; i<=size; i++){
		for(j=1; j<i+2; j++){
			printf("%d ", i);
		
		}
		printf("\n");
	}
		
	
	return 0;
}
