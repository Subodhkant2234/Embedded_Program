#include<stdio.h>
#include<stdarg.h>

void vsum(int,...);

int main()
{
	vsum(2,10,20);
	vsum(3,11,12,13);
	vsum(4,10,20,15,25);
	return 0;
}
void vsum(int n,...)
{
	va_list alist;
	va_start(alist,n);
	int i,x,sum=0;
	for(i=1;i<=n;i++) //some logic
	{
		int x;
		x=va_arg(alist,int);
		printf("next=%d\n",x);
		sum+=x;
	}
	printf("sum is %d\n",sum);
	va_end(alist);
}
/*void vsum(int n,...)
{
	void *pv=&n;
	int x,i,sum=0;
	//printf("n=%d,next=%d\n",n,*(++p));
	for(i=1;i<=n;i++)
	{	
		pv=pv+sizeof(int); //may be subtraction
		//how many bytes?
		printf("next=%d\n",*((int*)pv));
		sum+= *((int*) pv);
	}
	printf("sum is %d\n",sum);
}*/


