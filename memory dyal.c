#include<stdio.h>
#include<stdlib.h>
//use like an array without array with dynamic allocation

int main(){
	
	int *p;
	p = (int *)malloc(3*sizeof(int));  //¬Ù¬Ñ¬ß¬ñ¬ä¬î 3 ¬Þ¬Ö¬ã¬ä¬Ñ  
	//like kinda use array which has placed in heap (borrowed)
	
	p[0]=10;
	p[1]=20;
	p[2]=30;
	
	int i;
	for(i=0; i<3; i++){
		printf("p[%d] = %d \n", i, p[i]);
	}
	
	return 0;
}
