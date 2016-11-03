#include<stdio.h>
#include<string.h>

int main()
{	
	const int a = 10;
	int *p = &a;
	printf("Value p:%d\n", *p);
	*p = 5;
	printf("Value p:%d a:%d \n", *p, a);
}
