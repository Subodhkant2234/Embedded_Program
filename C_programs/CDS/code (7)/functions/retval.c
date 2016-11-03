#include<stdio.h>

int sum(int,int);
void isum(int,int,int*);
int* rsum(int,int);

int main()
{
	test();
	return 0;
}
void test()
{
	int a=10,b=20,c;
	c=sum(a,b);
	isum(a,b,&c);
	//print c
	int *p;
	p=rsum(a,b);
	sum(100,200);
	printf("sum is %d\n",*p);
}
int* rsum(int x,int y)
{
	int z;
	z=x+y;
	return &z; //dangerous,z will be deallocated after
		//function returns back to test
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
void isum(int x,int y,int *p)
{
	*p=x+y;
}


