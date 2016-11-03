#include<stdio.h>
#include<string.h>

int main()
{	
	int *p = NULL;
	*p = 5;
	printf("The address p:%p\n", p);
	printf("Value p:%d\n", *p);
}
