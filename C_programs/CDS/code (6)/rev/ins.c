#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 10

int main()
{
	int a[MAX],i,k,key;
	srand(time(0));
	for(i=0;i<MAX;i++)
	{
		a[i]=rand()%100;
		printf("%d\t",a[i]);
	}
	for(k=1;k<MAX;k++)
	{
		key=a[k];
		for(i=k;i>0&&key<a[i-1];i--)
			a[i]=a[i-1];
		a[i]=key;
	}
	printf("\nafter sorting\n");
	for(i=0;i<MAX;i++)
		printf("%d\t",a[i]);
	printf("\n");
	return 0;
}
