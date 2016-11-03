#include<stdio.h>

int main()
{
	int arr[5];

	int (*pa)[5];
	int (*qa)[20];

	pa=&arr; //perfect
	qa=&arr; //incompatible

	return 0;
}
