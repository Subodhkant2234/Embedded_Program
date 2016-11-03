#include<stdio.h>
#include "header.h"

int main()
{
	int p;
	printf("In file:%s..The value of a:%d\n", __FILE__, a);
	a = 10;
	p = increment();
	printf("The p value is:%d\n", p);
	return 0;
}
