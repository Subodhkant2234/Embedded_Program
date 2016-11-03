#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{	
	int *p = malloc(-4);
	printf("p:%p\n", p);
//	*p = 5;
	printf("Value p:%d Address:%p\n", *p, p);
}
