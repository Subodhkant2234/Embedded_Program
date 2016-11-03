#include<stdio.h>

int main()
{
	int i,n,y;
	n=10;

	i=1;
	while(i<=10)
	{
		y=1/(15-i);
		sum(i,5);
		i++;
	}
	printf("check point\n");
	y=1/(11-i);
	return 0;
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
