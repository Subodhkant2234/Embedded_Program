#include<stdio.h>
int main()
{
	int q = 5;
	int *p;
	typeof(p) y; // Here y type is integer type. It's not exactly an operator, rather a keyword.
	y = &q;
	printf("The value in y:%d\n", *y);
	return 0;


}
