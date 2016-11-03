#include<stdio.h>

int sum(int,int);

int main()
{
	int a=10,b=20,c,d;

	//int *fptr(int,int); //prototype, returning int*
	int (*fptr)(int,int);
	fptr=sum; //fptr=pro, fptr=pow
	c=fptr(a,b);

	int (*fp)();
	fp=sum;
	d=fp(12,6);
	printf("c=%d,d=%d\n",c,d);

	int (*fp1)(int);
	fp1=sum; //warning
	//fp1(10,20); //--error

	return 0;
}
int sum(int x,int y)
{
	return x+y;
}

