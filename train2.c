
#include <stdio.h>

int key[5] = { 1, 2, 3, 4, 5};

void swap(int a,int b,int *c,int *d,int *e)
{
	a = *(e+2);
	b = *d;
	*c = *(e-2);
	*d = *(e-1);
	*e = *e + 10;
}

main()
{
	int a = key[0];
	int *p = &key[2];

	swap(a,key[0]-2,key,p-2,key+2);
	printf("%d, %d, %d, %d, %d\n",key[0],key[1],key[2],key[3],key[4]);
}
