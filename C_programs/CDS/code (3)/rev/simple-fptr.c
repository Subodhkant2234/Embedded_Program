#include<stdio.h>

int sum(int,int);
int pro(int,int);
int diff(int,int);

int square(int);

int main()
{
	int a=10,b=20,c;

	int (*fp)(int,int);
	fp=sum; //fp=pro; //fp=diff;
	c=fp(a,b);

	fp=square; //warning
	//c=fp(a); --error
	//fp(a,b,c); --error
	
	int (*fptr)(int);
	fptr=square;
	fptr(16);

	int (*gptr)(); //unsafe,generic
	gptr=sum;
	gptr(10,20);
	//gptr(10); --Runtime issues
	gptr=square;
	gptr(16);
	//gptr(16,25); --Runtime issue

	test(a,b,sum);
	test(a,b,pro);

	typedef int (*fptype)(int,int);
	fptype pf1;
	pf1=sum;
	c=pf1(a,b);

	fptype parr[4];

	return 0;
}
//void test(int a,int b,fptype fp)
void test(int a,int b, int (*fp) (int,int)   )
{
	int res;
	res=fp(a,b);
	printf("result is %d\n",res);
}









