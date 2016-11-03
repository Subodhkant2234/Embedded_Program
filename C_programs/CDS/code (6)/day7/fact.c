#include<stdio.h>

#define PROD(a,b) (a)*(b)
#define DEC(a) (a)--
#define FACT(n)  { \
	int i, f=1; \
	for(i=n;i>=1;DEC(i)) \
		f=PROD(f,i); \
	printf("fact is %d\n",f); \
	}//end of sub scope
#define FUND(fname,n) \
	int fname(int n) \
	{ \
		if(n==0) return 1; \
		return n*fact(n-1); \
	}
#define FUNP(fname) int fname(int);

FUNP(fact)
int main()
{
	int i;
	FACT(6)
	int x=10,y=20,z;
	z=PROD(DEC(x),DEC(y));
	return 0;
}
FUND(fact,p)



