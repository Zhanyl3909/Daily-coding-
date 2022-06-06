#include<stdio.h>

int main(){
	
	int a = 20;
	int b = 30;
	int *p;
	
	p = &a;  //p is pointing the address of a
	*p = *p + 20;  // *p = value(that p is pointing = 20) = 20 + 20
	p = &b;  //now p is pointing address of b
	*p = a + b + *p;  // *p = (a=40) 40 + (b=30) 30 +(*p value that p is pointing now- b's value) 30 = 100
	
	printf("a = %d, b = %d\n", a,b); //a = 40, b = 100;
	
	return 0;
}
