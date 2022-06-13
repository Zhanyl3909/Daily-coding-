

#include <stdio.h>

void test(char *s,int n[],int row,int col)
{
	int i,j;

	for(i = 0; i < row; i++) {
		for(j = 0; j < col; j++) {
			s[i*col+j] = n[i] + '0';
			if (n[i] <= j+1) break;
		}
	}
}

main()
{
	int number[5] = { 1, 2, 3, 4, 5 };
	char names[5][10];
	int i;
	char *p = names;
	
	for(i = 0; i < 50; i++) p[i] = '\0';

	test((char *)names,number,5,10);

	for(i = 0; i < 5; i++) 
		printf("%s\n",names[i]);
}
