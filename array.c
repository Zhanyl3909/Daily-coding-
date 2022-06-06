#include<stdio.h>

int main(){
	
	int arr[] = {1,2,3,4,5,22};
	arr[5] = arr[5] + 2000;  //in the value that arr[5] contains + 2000!
	
	printf("This year : %d\n", arr[5]);
	
	return 0;
}
