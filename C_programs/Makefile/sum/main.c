#include<stdio.h>
#include "header.h"
int main()
{
	int i, j;
	int result = 0;
	printf("Enter the 2 numbers\n");
	scanf("%d %d",&i,&j);
	result = sum(i, j);
	printf("The sum is:%d\n", result);
	result  = diff(i, j);
	printf("The diff value:%d\n", result);
	return 0;

}
