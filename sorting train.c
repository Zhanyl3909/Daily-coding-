#include <stdio.h>

void sort(int v[],int n)
{
	int i,j;
	int tmp;

	for(i = 0; i < n-2; i = i + 2) {
		for(j = 0; j < n-i-2; j = j + 2) {
			if (v[j] > v[j+2]) {
				tmp = v[j];
				v[j] = v[j+2];
				v[j+2] = tmp;
			}
		}
	}	
}

main()
{
	int number[5] = { 19,8,11,3,12 };
	int i;

	sort(number,5);
	for(i = 0; i < 5; i++) {
		printf("%d ",number[i]);
	}
	printf("\n");
}
