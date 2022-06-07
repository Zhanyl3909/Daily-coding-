#include <stdio.h>
#include <string.h>
#define TRUE	(1)
#define FALSE	(0)

void search(char *aName,char *names[],int n)
{
	int low = 0;
	int high = n-1
	
	int mid;
	int c;

	while(low <= high) {
		mid = (high + low) / 2;
		/* 출력 하는 곳 */
		printf("mid = %d\n",mid);
		if ((c = strcmp(aName,names[mid])) == 0)
			return;
		else if (c > 0) 
			low = mid + 1;
		else
			high = mid - 1;
	}
	return;
}

main()
{
	char *name[10] = {
		"hong sungyu",
		"kim kynyun",
		"kim taegong",
		"kim taegyun",
		"kim taehoon",
		"lee changha",
		"lee heonwon",
		"lee myongjae",
		"shin woochang",
		"wu chisu"
	};

	search("lee hunki",name,10);
}	
