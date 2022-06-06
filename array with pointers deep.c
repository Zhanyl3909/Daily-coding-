#include<stdio.h>

int main(){
	int a;
	int i;
	printf("hwo many element would you include: ");
	scanf("%d", &a);
	int *arr;
	arr=((int*)malloc(a*sizeof(int)));
	
	for(i=0; i<a; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<a; i++)
	{
		printf("%d ", arr[i]);
	}
	
	
	
	return 0;
}
