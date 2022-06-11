#include<stdio.h>
#include<string.h>


int main(){
	char *x;
	x = strdup("Hello World");
	x[11] = '!';
	printf("%s\n", x);
	
	return 0;
}
