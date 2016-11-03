#include "test.h"

//static 
int k=20;
extern int p;
static int f=5;



//static 
int sum(int x,int y)
{
	k++;
	int z;
	z=x+y;
	return z;
}
static void sample()
{
	p++;
}
