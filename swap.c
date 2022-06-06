#include<stdio.h>

//declaring a swap function
void swap(int *a, int *b);

int main()
{
	int a = 20;
	int b = 30;
	
printf("Before swapping: \n");
printf("a = %d, b = %d\n", a,b);
swap(&a, &b);                       //calling-by-reference
printf("After swapping: \n");
printf("a = %d, b = %d\n", a,b);
	
	
	return 0;
}

void swap(int *a, int *b){
	int tmp; //empty place
	tmp = *a; 
	*a = *b;
	*b = tmp;
	
}
