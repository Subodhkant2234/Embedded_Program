//array of function pointers

#include<stdio.h>

int sum(int,int);
int pro(int,int);
int power(int,int);

typedef int (*fptype)(int,int);
//void test(int,int, int (*)(int,int)   );
void test(int,int,fptype)
int main()
{
	int a=2,b=5,c,d,e;

	fptype fp1; // int (*fp1)(int,int);
	fp1=sum;
	c=fp1(10,20);

	test(10,20,sum);
	test(12,15,pro);
	test(2,5,power);

	return 0;
}
//void test(int a,int b, int (*fptr)(int,int)  )
void test(int a,int b,fptype fptr)
{
	int c;
	c=fptr(a,b);
	printf("result=%d\n",c);
}
int sum(int x,int y) 
{
	return x+y;
}
int pro(int x,int y)
{
	return x*y;
}
int power(int a,int m)
{
	//do some
	return 1;
}


