#include<stdio.h>

//selection soritng

//printing array function declare
void printArray(int *a, int n);

//find a max 
int maxArr(int *b, int x);

//find a min
int minArr(int *c, int y);


int main(){
	
	int x[10]={ 38, 54, 67, 45, 89, 12, 29, 17, 82, 51};
	int len = sizeof(x)/sizeof(int);
	
	printArray(x, len);
	maxArr(x, len);
	minArr(x, len);
	
	return 0;
}

void printArray(int *a, int n)
{
	int i;
	for(i=0; i<n; i++){
		printf("%d ", *(a+i));
	}
	printf("\n");
}


int maxArr(int *b, int x)
{
	int i;
	int max = -1;
	int maxPos = -1;
	
	for(i=0; i<x; i++){
		if(b[i]>max){
			max = b[i];
			maxPos = i;
		}
	}
	printf("%d = max element\n%d = maxPosition\n", max, maxPos);
}


int minArr(int *c, int y)
{
	int i;
	int min = 999999; //any big number
	int minPos = -1;
	
	for(i=0; i<y; i++){
		if(c[i] < min ){
			min = c[i];
			minPos = i;
		}
	}
	printf("%d = min element\n%d = minPosition\n", min, minPos);
}
