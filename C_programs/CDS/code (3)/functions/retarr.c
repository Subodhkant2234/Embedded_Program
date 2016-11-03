#include<stdio.h>
int* increment(int,int[]);

int main()
{
	int a[5]={10,20,30,40,50};
	int *parr;

	parr=increment(5,a);
	//print array using parr
	return 0;
}
int* increment(int n,int x[n])
{
	int i,y[5];
	for(i=0;i<n;i++){
		x[i]++;
		//y[i]=x[i]+1;
	}
	return x;
	//return y;
}
