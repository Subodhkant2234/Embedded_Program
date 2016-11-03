#include<stdio.h>

int main()
{
	int *ptr=100;
	int x=0x41424344;
	char *pc=&x;
	double *q;
	printf("%x\n",*pc);
	printf("%x\n",*++pc);
	printf("%x\n",*++pc);
	printf("%x\n",*++pc);

	void *pv=&x;
	x=sizeof(*pv);
	printf("pv=%u\n",pv);
	printf("pv=%u\n",++pv);

	int a=12;
	int *pa=&a;
	printf("ival=%d\n",*pa++);
	return 0;
}
