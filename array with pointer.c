#include<stdio.h>

int main()
{
	int arr[] = { 34, 56, 78, 27, 45, 67, 77, 10, 23, 11};
	int len = sizeof(arr)/sizeof(arr[0]); //finding length of array
	int i;
	int *p;
	
	p = arr; // p = &arr[0] is similar
	*(p+5) = 2000;  //change p[5] = p[5] + 2000
	
	for(i=0; i<len; i++)
	{
		printf("%d. p[%d] = %d\n", i,i, p[i]);
	}
	
    return 0;
}
