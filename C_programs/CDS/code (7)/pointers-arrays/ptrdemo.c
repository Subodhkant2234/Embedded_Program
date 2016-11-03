#include<stdio.h>

int main()
{
	int x=10;
	double y=2.75;

	int *p;
	double *q;

	p=&x;
	q=&y;

	printf("x=%d,&x=%u\n",x,&x);
	printf("p=%p,*p=%d\n",p,*p);

	printf("y=%lf,&y=%u\n",y,&y);
	printf("q=%p,*q=%lf\n",q,*q);

	*p=15; //print x
	*q=7.8; //print y
	
	return 0;
}
