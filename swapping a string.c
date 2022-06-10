#include<stdio.h>
#include<string.h>

void swap(char *a, char *b){
	
	char tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	
	char *fir = "Hello";
	char *sec = "World";
	
	printf("%s %s\n",fir, sec);
	swap(&fir, &sec);
	printf("%s %s\n",fir, sec);
	
	
	return 0;
}
