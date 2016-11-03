#include<stdio.h>
int (*   test(int,int(*)[5],int(*)[5])   )[5];
//patype test(int,.....);
int main()
{
	int a[5]={10,20,30,40,50};
	int b[5]={1,2,3,4,5};

	int (*parr)[5];
	parr=test(5,&a,&b);
	//print array using parr
	return 0;
}
int (* test(int n,int (*pa)[5], int (*pb)[5]) )[5]
{
	int i,z[5];
	//for(i=0;i<n;i++){
		//x[i]++;
		//y[i]=x[i]+1;
	//}
	return pa;
	//return pb;
}
