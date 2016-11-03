#include<stdio.h>

int main()
{
	float x;
	printf("enter x val\n");
	scanf("%f",&x);

	int *ptr=&x;
	printf("x=%x\n",*ptr);
	//print *((int&)&x)
	return 0;
}
