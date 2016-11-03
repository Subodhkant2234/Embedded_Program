#include<stdio.h>

int main()
{
	const int x=10;
	int *p;
	p=&x; //warning only
	//p=(int*)&x; //no warning
	*p=12;
	(*p)++;
	printf("*p=%d,x=%d\n",*p,x);

	const int* q; //preferred
	q=&x;

	int *pr;
	pr=q;

	//const volatile int x;
	
	return 0;
}
