#include<stdio.h>
int main()
{
	int x = 3;
	int y = 5;
	static int p = x + y;
	printf("The value of p:%d\n", p);
	return 0;
}
