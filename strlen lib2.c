#include <stdio.h>
#define MAXLENGTH 80

int my_strlen(char* s)
{
    int i=1;
    char *p = s;
    while (*p !='\0')
        p++;

    return (p-s);
}


int main()
{

    char str[MAXLENGTH];
    int len;
    printf("Enter a string:");
    gets(str);
    len = my_strlen(str);
    printf("The length of the string %s is %d\n", str, len);
}
