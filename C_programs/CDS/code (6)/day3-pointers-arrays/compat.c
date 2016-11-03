#include<stdio.h>

int main()
{
	int x,*pi;
	float y,*pf;
	double z,*pd;
	char c1,*pc;

	y=7.5f;
	pi=&y; //no error, warning
	printf("val is %x\n",*pi);
	*pi=0x3e200000;
	printf("y=%f\n",y);

	z=3.14159f;
	pi=&z;
	//access *pi
	//pi=pf
	//pf=pc

	x=0x41424344;
	pc=&x;
	printf("%d,%c\n",*pc,*pc);
	pc=pc+3;
	printf("%d,%c\n",*pc,*pc);


	return 0;
}
