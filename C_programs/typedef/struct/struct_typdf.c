#include<stdio.h>
#include"struct.h"

int main ()
{
	abc x;
	abc y;

	x.a=50;
	y.a=100;
	x.b=1000;
	y.b=2000;

	printf("The vale of x.a:%d..x.b:%d..y.a:%d..y.b:%d\n", x.a, x.b, y.a, y.b);
	return 0;
}

