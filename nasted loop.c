#include<stdio.h>

int main()
{
	int i,j;
	int k;
	
	for(i=1; i<=10; i++){
		for(j=1; j<=10; j++){
			int sum;
				 k = k+1;
			sum = sum + k;  
			
			printf("%5d ", sum );
		}
		printf("\n");
	}
	
	
	return 0;
}
