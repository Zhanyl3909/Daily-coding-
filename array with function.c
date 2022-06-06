#include<stdio.h>

int getSumOf(int *p, int n);

int main()
{
	int arr[] = { 38, 54, 67, 45, 89, 12, 29, 17, 82, 51 };
	int len = sizeof(arr)/sizeof(int);
	printf("sum = %d", getSumOf(arr, len));
	
	return 0;
}
int getSumOf(int *p, int n)
{
	int sum = 0;
	int i;
	
	for(i=0; i<n; i++){
		sum = sum + p[i];
	}
	return sum;
}
