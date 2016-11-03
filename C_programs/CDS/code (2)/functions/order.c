#include<stdio.h>

void myprint(int,int,int);

int main()
{
	int a=10,d=0,e=6;
	myprint(e+2,e=d+3,d=a+5);
	//order of evaluating params
	return 0;
}
void myprint(int x,int y,int z)
{
	int p=x,q=y,r=z;
	printf("x=%d,y=%d,z=%d\n",p,q,r);
}
