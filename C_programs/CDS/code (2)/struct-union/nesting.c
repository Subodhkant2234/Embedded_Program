#include<stdio.h>
/*struct B
{
	int p;
	int q;
};
struct A
{
	int x;
	int y;
	struct B b1;
};*/
struct A
{
	int x;
	int y;
	struct B {
		int p;
		int q;
	}b1;
	//struct B b1;
};
int main()
{
	struct A a1;
	a1.x=10;
	a1.y=20;
	a1.b1.p=30;
	a1.b1.q=40;
	struct A a2={11,12,{13,14}};
	printf("%d,%d,%d,%d\n",
	  a2.x,a2.y,a2.b1.p,a2.b1.q);

	struct B b2={11,12};

	return 0;
}
