#include<stdio.h>
#include<stdlib.h>

print2dArr(int **a, int row, int col){
	int i, j;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%5d ",a[i][j]);		
		}
		printf("\n");
	}
	
}

int main(){
	
	int i, j;
	int **p;   //create 2d array
	
	p = (int **)malloc(sizeof(int*) * 3);
	for(i=0; i<3; i++){
		p[i] = (int *)malloc(sizeof(int) *4);
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			p[i][j] = i*4 +j+1;
		}
	}
	
	print2dArr(p, 3,4);
	
/*	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%5d ",p[i][j]);		
		}
		printf("\n");
	}
	*/
	
	return 0;
}
