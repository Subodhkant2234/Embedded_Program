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
	struct box* pb;

	pb=&b1;
	pb->l=10;
	pb->b=12;
	pb->h=5;
	int vol=pb->l*pb->b*pb->h;
	//print vol
	
	print(&b1);

	return 0;
}
void print(const struct box* ptr)
{
	//print ptr->l,ptr-<b,ptr->h
}
/*void print(struct box x)
{
	//print x.l,x.b,x.h
}*/




