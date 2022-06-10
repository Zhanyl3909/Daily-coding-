#include<stdio.h>
#include<string.h>

int sizeOfString(char *s){
	
	int i;
	for(i=0; *s != '\0'; s++){
		i++;
	}
	return i;
}

int main(){
	char name[20];  //³Ë³ËÇÏ°Ô
	int len;
	
	name[0] = 'Z';
	name[1] = 'h';
	name[2] = 'a';
	name[3] = 'n';
	name[4] = '\0';
	len = sizeOfString(name);
	
	printf("%s", name);
	printf(". This has %d size\n", len);
	
	return 0;
}
