#include<stdio.h>


//int print2Darray(int x[3][4], int row, int column){

int print2Darray(int x[], int row, int column){

	int i, j;
		for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%5d", x[i*column+j]);  //2차원 배열을 in poiter use like 1d array, so for  CONVERTING
		}
		printf("\n");  //for printing 
	
}
}

int main(){
	int x[3][4] = {
		{20, 30, 70, 0},
		{40, 50, 50, 0},
		{70, 80, 80, 0}
	};
	
	int i, j;
	for(i=0; i<3; i++){
		x[i][3] = 0;  //this means the 3rd element of all 3rows is equal with 0
		for(j=0; j<3; j++){
			x[i][3] = x[i][3] + x[i][j];
		}
	}
	print2Darray( x,3,4);
	
	return 0;
}
