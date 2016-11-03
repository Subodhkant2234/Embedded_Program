#include<stdio.h>
#include<stdlib.h>
int main()
{
	char buff[20];
	unsigned long p;
	int a = 2, b = 5;
	sprintf(buff, "%d  %d", a, b);
	printf("The value of buff:%s\n", buff);
	p = strtoul(buff, NULL, 16);
	printf("The value after strtoul:%ld\n", p);
	return 0;
}


