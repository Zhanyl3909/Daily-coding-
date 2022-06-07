#include<stdio.h>



void printArray(int *a, int n);

int getMaxPos(int p[], int len);

void swap(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int selectionSort(int *x, int len){
	int i;
	int maxPos;
	
	for(i=0; i<len-1; i++)
	{
	maxPos = getMaxPos(x, len-i);
	swap(&x[maxPos] , &x[len-i-1]);
    }
}



int main(){
	
	int x[10]={ 38, 54, 67, 45, 89, 12, 29, 17, 82, 51};
	int len = sizeof(x)/sizeof(int);
	
	int i;

	int maxPos;

	printf("==Before sorting==\n");
	printArray(x, len);
	selectionSort(x, len);
	printf("==After sorting==\n");
    printArray(x, len);



	
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


int getMaxPos(int p[], int len){
	
	int i;
	int max;
	int maxPos;
		
	max = -1;
	maxPos = -1;
	for(i=0; i<len; i++){
		if(p[i] > max){
			max = p[i];
			maxPos = i;
		}
	}
	return maxPos;
}
