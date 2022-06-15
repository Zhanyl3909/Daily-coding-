#include<stdio.h>

typedef   //typedef for Salary is consist a union that includes int , double and ect ... 
union{
	int money;
	double gold;
	
}Salary;

int main(){
	
	Salary a;   //crate a variable kinda like Salary(which could choose int, or char in union)
	Salary b;
	
	a.money = 100;
	b.gold = 2.35;
	
	printf("%d %f\n", a.money, b.gold);
	
	return 0;
}
