#include<stdio.h>
void printNos(unsigned int n);
int main()
{
	printNos(100);
	return 0;
}
void printNos(unsigned int n)
{
	if(n > 0) {
	printNos(n-1);		
	printf("%d\n", n);

	}
}
