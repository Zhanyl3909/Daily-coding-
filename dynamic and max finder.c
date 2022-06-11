#include<stdio.h>
#include<stdlib.h>

int findMax(int *s, int n){
	int *a;
	int i;
	int max = 0;
	a = (int *)malloc(sizeof(int) * n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	return max;
}

int main(){
	
	
	int a;
	printf("a = ");
	scanf("%d", &a);
	
	int *p;
	p = (int *)malloc(sizeof(int) * a);
	
	
	printf("The max is : %d",findMax(p , a));
	
	return 0;
}
