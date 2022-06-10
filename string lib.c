

#include <stdio.h>
#include <string.h>
void test4(char *p)
{
	int pos;

	strcat(p,"XXX");
	strcpy(p+5,"YYY");
	pos = strlen(p)/2;
	p[pos] = 'Z';	
}
main()
{
	char data[20];


	strcpy(data,"981758");
	test4(data);
	printf("%s\n",data);
}
