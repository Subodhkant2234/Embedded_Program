#include<stdio.h>

int main()
{
	int a[5],b[5],c[5];
	int *parr[5];
	int m[3][5];

	parr[0]=a; //m[0]
	parr[1]=b; //m[1]
	parr[2]=c; //m[2]

	int *ptr;
	ptr=*(parr+1);

	return 0;
}


