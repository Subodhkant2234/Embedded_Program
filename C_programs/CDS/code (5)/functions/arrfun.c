#include<stdio.h>

void print1(int*,int);
void print2(int,int[]);
void print3(int,int(*)[]);
int main()
{
	int a[8],i;
	//sizeof(arr)
	for(i=0;i<8;i++)
		a[i]=rand()%100;
	print1(a,8);
	print2(8,a);
	print3(8,&a);

	return 0;
}
//void print3(int,int(*)[]);
void print3(int n, int (*pa)[n])
{
	int i;
	printf("in print3\n");
	for(i=0;i<n;i++)
		printf("%d\n",*pa[i]);

}
void print2(int n,int xarr[n])
{
	printf("size=%d\n",sizeof(xarr));
	int i;
	for(i=0;i<n;i++)
		printf("%d\n",xarr[i]);


}
void print1(int *parr,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\n",parr[i]);
}
