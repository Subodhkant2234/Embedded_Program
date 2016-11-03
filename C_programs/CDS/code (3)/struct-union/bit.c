//Bit fields

#include<stdio.h>
#include<stddef.h>

struct A
{
	unsigned int x:3;
	unsigned int y:5;
	unsigned int z:4;
	unsigned p:6;
	int q:20;
	//unsigned q:20;
	double b;
	int a;
};
struct B
{
	unsigned int x:2;
	unsigned int:3;
	unsigned int y:4;
};
struct C
{
	unsigned int x:4;
	unsigned int y:4;
	unsigned int :4;
	unsigned int z:4;
}c1;


int main()
{
	printf("size=%d\n",sizeof(struct A));
	printf("%d,%d\n",offsetof(struct A,b),
			offsetof(struct A,a));
	struct A a1;
	a1.x=12;
	a1.y=20;
	printf("x=%u,y=%u\n",a1.x,a1.y);
	a1.q=12;
	printf("%d\n",a1.q);

	//int off=offsetof(struct A,y); --error
	//int *ptr=&a1.x; --error
	
	int n;
	c1.x=0xA;
	c1.y=0xB;
	c1.z=0x5;
	memcpy(&n,&c1,4);
	printf("n=%x\n",n);

	struct C *pc=&n;
	pc->x=0xD;
	pc->y=0x5;
	pc->z=0xA;
	printf("n=%x\n",n);

	return 0;
}


