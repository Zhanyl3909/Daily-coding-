
#include <stdio.h>

main()
{
	int number[5] = { 1, 2, 3, 4, 5 };

	int x[5][5];
	int i,j,k;
	int *p;

	for(i = 0; i < 5; i++) {
		k = i;
		for(j = 0; j < 5; j++) {
			if (k > 4) {
				k = 0;
			}
			x[i][j] = number[k];
			k++;
		}
	}

	p = &x[0][0];
	k = 4;
	for(i = 0; i < 5; i++) {
		p[k] = i;
		k = k + 5;
	}

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			printf("%d",x[i][j]);
		}
		printf("\n");
	}

}
