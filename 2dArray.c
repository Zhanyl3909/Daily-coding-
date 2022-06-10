#include<stdio.h>

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
	
	//printing 2d array
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%5d", x[i][j]);
		}
		printf("\n");  //for printing each row in the new line
	}
	
	return 0;
}
