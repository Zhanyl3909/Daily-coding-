#include<stdio.h>
#include<stdlib.h>

int main(){
	char *p;
	
	p = (char *)malloc(sizeof(char) *1);
	
	if(p == NULL){
		printf("Memory allocation error\n");
		exit(0);
	}
	
	*p = 'Z';
	printf("%c", *p);
	free(p);
	
	return 0;
}
