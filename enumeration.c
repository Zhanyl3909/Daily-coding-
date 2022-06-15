#include<stdio.h>

typedef enum { SUN, MON, TUE, WED, THU, FRI, SAT} Day;

void f(){
	Day y, z;
	
	y = SUN;
	z = TUE;
}

int main(){
	
	Day x;
	x = SUN;
	x = MON;
	
	if(x == SUN){
		printf("Sunday\n");
	}else if(x ==MON){
		printf("Monday\n");
	}else{
		printf("Not Weekend\n");
	}
	
	return 0;
}
