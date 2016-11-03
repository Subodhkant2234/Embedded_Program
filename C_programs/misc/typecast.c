#include<stdio.h>

int main()
{
	int a = 0x11223344;
	char *p;
	p = (char *)&a;
	printf("The value at the at p:%x  p Address:%p a Address:%p\n", *p, p, &a);
	return 0;
}
