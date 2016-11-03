#include<stdio.h>

int main()
{
	int a;
	int b;
	printf("Enter the value of a & b\n");
	scanf("%d %d", &a, &b);
	printf("The value of a : %d b : %d Address:%p Address b:%p\n", a, b, &a, &b);
	return 0;
	
}
