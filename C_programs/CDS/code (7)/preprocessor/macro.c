#include<stdio.h>

#define SUM(a,b) ((a)+(b))
#define SQUARE(n) (n)*(n)
#define PROD(a,b) (a)*(b)
#define BIG(a,b) (((a)>(b))?(a):(b))

#define LENGTH(arr) (sizeof(arr)/sizeof(arr[0]))
//NROWS, NCOLS for an 2D array
//#define SUM(a) a*a*a

int main()
{
	int arr[]={10,20,30,40,50,60};
	int x=10,y=20,z;
	z=SUM(x,5)*8;
	printf("z=%d\n",z);
	z=SQUARE(x+2);
	printf("z=%d\n",z);
	printf("prod=%d\n",PROD(x,y));
	z=BIG(x,12);
	z=BIG(++x,++y);
	printf("z=%d\n",z);

	return 0;
}
