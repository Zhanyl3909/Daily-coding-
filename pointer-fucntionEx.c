#include<stdio.h>

int add(int x, int y){
	return x + y;
}


int sub(int x, int y){
	return x - y;
}


int mul(int x, int y){
	return x * y;
}


int div(int x, int y){
	return x / y;
}



int main(){
	
	int a, b;
	int i;
	int which;
	int c;
	
	for(i=0; i<5; i++){
		printf("1(+);   2(-);   3(*);   4(/)");
		scanf("%d", &which);
		
		printf("input for first data: ");
		scanf("%d", &a);
		
		printf("input for second data: ");
		scanf("%d", &b);
		
		if(which == 1){
			c = add(a,b);
		}else if(which == 2){
			c = sub(a,b);
		}else if(which == 3){
			c = mul(a,b);
		}else{
			c = div(a,b);
		}
		printf("the total: %d\n",c);
	}
	
	return 0;
}
