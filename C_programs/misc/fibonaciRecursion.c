#include<stdio.h>
int fib(int );
int main()
{
	int nterms, i;
	printf("Eneter the number of terms\n");
	scanf("%d", &nterms);
	for(i =0; i < nterms; i++)
		printf("%d", fib(i));
	printf("\n");
	return 0;
}

int fib(int n)
{
	if( n == 0 || n == 1)
		return n;
	return(fib(n-1) + fib(n-2));

}
