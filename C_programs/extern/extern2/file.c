#include<stdio.h>
#include"file.h"
int main()
{
//	extern int x;
	int x = 10;
	printf("FILE:%s the value of x is:%d\n", __FILE__, x);
	put();
	return 0;
}

