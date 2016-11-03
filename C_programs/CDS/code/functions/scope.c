#include<stdio.h>

int a=10; //.data
int b;	  //bss
int c=5;

int main()
{
	int x,y,p;
	int a=20;

	printf("main-a=%d\n",a);
	{
		double a=5.6;
		printf("a=%lf\n",a);
	}
	c=15;
	test();
	//print c
	//d--; --error

}

int d=0;

void test()
{
	int x,z;
	float y,b=2.3f;

	printf("test-a=%d\n",a);
	//print b
	//print c
	c++;
	d++; //ok

}
