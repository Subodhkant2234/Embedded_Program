#define size_of(data) ( (char *)(&data +1) - (char *)(&data))
#include<stdio.h>
struct a {
	int  b;
	char c;
}d;
int main()
{
	printf("The sizof int :%d\n", size_of(d));
	return 0;
}

