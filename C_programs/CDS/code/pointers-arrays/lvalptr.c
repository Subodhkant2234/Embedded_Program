#include<stdio.h>

int main()
{
	int x=10;
	int*p=&x;
	++++p;
	++++(*p);
	++++*p;
	++++x;
	++*++p;
	++*p++;
	return 0;
}
