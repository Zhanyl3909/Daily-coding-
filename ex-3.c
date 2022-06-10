#include <stdio.h>

void what(int p[],int row,int col)
{
	int i;

	for (i = 0; i < row + col; i++) 
		p[i] = 10 * p[i];
}

main()
{
	int x[3][4];
	int i,j;

	for(i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			x[i][j] = i + j;

	what((int *)&x[0][0],3,4);

	for(i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) 
			printf("%4d",x[i][j]);
		printf("\n");
	}
}
