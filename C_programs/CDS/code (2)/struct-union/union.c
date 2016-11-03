#include<stdio.h>

union A
{
	int x;
	unsigned int y;
	float z;
	char ch;
	short int h1,h2;
	short int harr[2];
};
union B
{
	double y;
	char arr[8];
	int x[2]; //x[0], x[1]
};
int main()
{
	union A a1;
	a1.z=7.5f;
	printf("x=%x\n",a1.x);

	a1.x=0x3e200000;
	printf("z=%f\n",a1.z);

	a1.x=-6;
	printf("y=%x\n",a1.y);

	a1.x=0x41424344;
	printf("%c,%d\n",a1.ch,a1.ch);

	printf("h=%x\n",a1.h1);
	printf("%x,%x\n",a1.harr[0],a1.harr[1]);

	return 0;
}

