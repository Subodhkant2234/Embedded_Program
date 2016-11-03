#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
	static int a;
	int b = 3;
	a = b;
	printf("The value is:%d\n",a);
	return 0;
}
