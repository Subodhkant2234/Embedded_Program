#include<stdio.h> 

typedef int sum_int(int , int);

int main()
{
	int q, s;
	sum_int p, r;
	q = p(1, 2);
	s = r(5, 10);
	printf("q and s value is:%d...%d\n", q, s);
	return 0;

}
int r(int a, int b)
{
	return (b-a);
}
int p(int a, int b)
{
	return (a+b);
}
