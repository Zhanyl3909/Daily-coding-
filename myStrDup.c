#include<stdio.h>
#include<string.h>
#include<malloc.h>

char *my_strdup(char *s){
	char *p; //don't know wy we need this 
	
	p = (char*) malloc(strlen(s)+1);
	strcpy(p, s);
}

int main(){
	char *x;
	x = my_strdup("Hello World");
	x[11] = '!';
	printf("%s\n", x);
	
	return 0;
}
