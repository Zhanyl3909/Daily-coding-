#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


//for escape an overflow
int main(){
	
    int *p;
    int a;
    int i;
	printf("a = ");
	scanf("%d", &a);
	
	p = (int*)malloc(a*sizeof(int));  //a만큼 자리 잡는다


	for(i=0; i<a; i++) {
		scanf("%d", &p[i]);
	}
	for(i=0; i<a; i++){
		printf("p[%d] = %d \n", i,p[i]);
	}
	printf("\n");
	
	
	return 0;
}
