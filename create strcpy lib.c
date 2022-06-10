#include<stdio.h>
#include<string.h>

void my_strcpy(char *to , char *from){
	int i;
	i =0;
	
	while((to[i] = from[i]) != '\0') {
		i++;
	}
}

int main(){
	char *k = "Hello";
	
	char greeding[50];
	
	my_strcpy(greeding, k);
	printf("greeding: %s\n", greeding);
	
	return 0;
}
