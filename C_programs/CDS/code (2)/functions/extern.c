#include<stdio.h>

extern int a;
extern int b; //pure declaration
int x=10;
int y;

int main()
{
	a++;
	b=20; //--linker error,if not defined
	//c=30; -- compile time error
	printf("a=%d\n",a);

	int m=sum(a,5);

	return 0;
}

int a=10;

