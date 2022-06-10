#include<stdio.h>
#include<string.h>

int my_strcmp(char *s, char *t){
	int i=0;
	
	while(s[i] == t[i]){
		if(s[i] == '\0') return (0);
		i++;
	}
	return (s[i]-t[i]);
}

int main(){
	char* p = "Kim";
	char* q = "Kima";
	
	int c;
	c = strcmp(p,q);
	
	if (c==0){
		printf("same\n");
	}else if(c>0){
		printf("%s\n", p);
	} else{
		printf("%s\n", q);
	}
	
	return 0;
}
