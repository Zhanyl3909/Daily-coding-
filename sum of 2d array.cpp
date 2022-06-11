#include<stdio.h>
#include<stdlib.h>
int sum(int **a, int row, int col);  //declare


//this function create 2d array
int **malloc( int m, int n){
	int i, j;
	int **p;
	
	p = (int **)malloc(sizeof(int *) * m);
	for(i=0; i<m; i++){
		p[i] = (int *)malloc(sizeof(int ) * n);
	}
	
   	return p;
}





//this function prints array
int print2d(int **a, int row, int col){
	int i;
	int j;
	int **p;
	p = malloc(row, col);

/*	p = (int **)malloc(sizeof(int*) * row);
	for(i=0; i<row; i++){
		p[i] = (int *)malloc(sizeof(int ) * col);
	}
*/
	
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
		p[i][j] = i*4 +j+1;
		}
	
}
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%4d", p[i][j]);
		}
		printf("\n");
	}
			printf("Sum of 2d array is %d ", sum(p, row, col) );
}



//this function find sum of 2d array
 int sum(int **a, int row, int col){
	int i, j;
	 int sum = 0;
		for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			sum = sum + a[i][j];
		}
		
	}
	return sum;
}



int main(){
	
	int i,j;
	int **p;
	p = malloc(3,4);
	
	print2d(p, 3,4);
	
	
	return 0;
}
