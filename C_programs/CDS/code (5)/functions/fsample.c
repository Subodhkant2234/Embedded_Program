#include<stdio.h>

//int sum(int,int);

int main()
{
	int a=10,b=6,c;
	c=sum(a,b);
	printf("sum=%d\n",c);
//	c=diff(a,b); //linker error,if not defined
	pro(20);
	return 5;
}
int sum(int x,int y)
{
	int z=x+y;
//	return x+y;
}
void  pro(int x,int y)
{
	printf("product is %d\n",x*y);	
}
