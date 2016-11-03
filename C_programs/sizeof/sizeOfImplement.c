#include<stdio.h>
#include<stdlib.h>
#define SIZEOF(type) (char *)(&type + 1) - (char *)(&type)
int main()
{
	char a = 'p' ;	
	printf("%ld...\n", SIZEOF(a));
	exit(EXIT_SUCCESS);
}
