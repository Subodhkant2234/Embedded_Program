#include<stdio.h>

struct box
{
	int l;
	int b;
	int h;
};

int main()
{
	struct box b1;
	b1.l=10;
	b1.b=12;
	b1.h=5;
	//scanf("%d%d%d",&b1.l,&b1.b,&b1.h);
	printf("l=%d,b=%d,h=%d\n",b1.l,b1.b,b1.h);
	int vol=b1.l*b1.b*b1.h;
	//print vol
	struct box b2={10,12};
	printf("l=%d,b=%d,h=%d\n",b2.l,b2.b,b2.h);
	return 0;
}





