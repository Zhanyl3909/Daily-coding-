#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j;
	
	int **p;
	p = (int **)malloc(sizeof(int*) * 3);
	for(i=0; i<3; i++){
		p[i] = (int *) malloc(sizeof(int ) * 4);
	}
	
	
	
	
	return 0;
}
