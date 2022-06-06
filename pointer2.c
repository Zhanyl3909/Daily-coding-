#include <stdio.h>
void swap(int *x,int y,int *z)
{
	int tmp;

	tmp = *x;  // tmp = 5
	*x = y;    // *x = 8
	y = *z;    // y = 9
	*z = tmp;  // *z = 5
}
main()
{

	int a = 5;
	int b = 8;
	int c = 9;

	swap(&a,b,&c);  //b is calling by value!
	printf("%d %d %d\n",a,b,c);  // 8 8 5
}
