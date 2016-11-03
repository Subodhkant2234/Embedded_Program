#include<stdio.h>

#define paster(m, n) m##n

int main()
{
	int a = 9;
	int b = 3;
	int c;
	c = paster(3, 9);
	printf("c:%d\n", c);
}
