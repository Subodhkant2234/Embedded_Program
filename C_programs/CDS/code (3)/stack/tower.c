#include<stdio.h>

int main()
{
	int n=3;
	move(3,'A','B','C');
	return 0;
}
void move(int n,char src,char mid,char dest)
{
	if(n==0) return 0;
	move(n-1,src,dest,mid);
	printf("move %d from %c to %c\n",n,src,dest);
	move(n-1,mid,src,dest);
}
	

