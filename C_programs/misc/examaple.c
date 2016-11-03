#include <stdio.h>
int main()
{
	int i = 10;
	void *p;
	p = &i;
	printf("%d\n", *p);
	return 0;
}
