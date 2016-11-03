#include<stdio.h>
#include "test.h"

extern int k;
int p;

int main()
{
	int a,b,c,d;
	a=10;
	b=5;
	c=sum(a,b);
	d=square(a);
	printf("c=%d,d=%d\n",c,d);

	k++;
	printf("k=%d\n",k);

	return 0;
}
