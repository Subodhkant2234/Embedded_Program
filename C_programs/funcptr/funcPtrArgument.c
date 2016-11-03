#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
	return a+b;
}
int diff(int a, int b)
{
	return a-b;
}
typedef int (*func)(int, int);
int main()
{
		int ret;
		int a = 5, b = 10;
      	ret = compute(sum, a, b);
		printf("Result:%d\n", ret);
		return 0;
}

int compute(func functpr, int a, int b)
{
	functpr(a,b);
}

