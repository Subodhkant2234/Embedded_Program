#include<stdio.h>
#include<string.h>
int main()
{
	char a[] ="1234+678+9372+3428,6780";
	char b[] = "+";
	char *p ;
	p = strtok(a, b);
	while (p != NULL) {
		printf("The string is:%s\n", p);
		p = strtok(NULL, b);
	}
	return 0;
}
