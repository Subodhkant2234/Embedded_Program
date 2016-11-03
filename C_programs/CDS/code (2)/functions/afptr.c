//array of function pointers
//
#include<stdio.h>

int sum(int,int);
int pro(int,int);
int power(int,int);

int main()
{
	int a=2,b=5,c,d,e;

	int (*fparr[4])(int,int);
	fparr[0]=sum;
	fparr[1]=pro;
	fparr[2]=power;
	//fparr[3]=div
	
	c=fparr[0](a,b);
	d=fparr[1](a,b);
	e=fparr[2](a,b);
	printf("c=%d,d=%d,e=%d\n",c,d,e);
	//fparr[i](a,b); -- i can be 0,1,2,3
	//fparr[3](a,b); -- seg fault

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


