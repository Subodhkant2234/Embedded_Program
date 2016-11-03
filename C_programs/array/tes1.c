#include<stdio.h>
int main()
{
	int a = 5, b = 6;
	if (a > b)
	goto err;
	printf("Trying to avoid normal sequence of executio\n");	

err: 
	printf("The value of a:%d\n", a);

}
