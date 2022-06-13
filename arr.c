
#include <stdio.h>

main()
{
	int number[5] = { 1, 2, 3, 4, 5 };
	char names[5][10];
	int i,j;

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 10; j++) {
			names[i][j] = 'X';
		}
	}
	for(i = 0; i < 3; i++) {
		j = number[i];
		names[i][j] = '\0';
	}
	names[4][1] ='\0';
	for(i = 0; i < 5; i++) 
		printf("%s\n",names[i]);
}
