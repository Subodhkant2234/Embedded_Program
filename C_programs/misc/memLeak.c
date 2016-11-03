#include<stdio.h>
#include<string.h>
void fun();
int main()
{	
	int *p = NULL;
	p = malloc(10);
	fun();
	while(1) {
		printf("The address p:%p\n", p);
		printf("Value p:%d\n", *p);
	}
}

void fun()
{
	int *q = malloc(100);
	printf("In fun function\n");
}
