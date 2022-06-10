
#include <stdio.h>
void test3(int *x,int row,int col)
{
	int i;
	int tmp;

	for(i = 0; i < row; i++) {
		tmp = x[i*col];
		x[i*col] = x[i*col+1];
		x[i*col+1] = tmp;	
	}
}
main()
{

	int data[2][3] = {2,2,2,7,1,7};
	int i,j;

	test3((int*)&data[0][0],3,2);
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) 
			printf("%d ",data[i][j]);
		printf("\n");
	}
}
