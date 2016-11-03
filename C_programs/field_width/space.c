#include<stdio.h>
int main()
{
	int a = 5;
//	printf("The value is:0x%05d0x%06d\n", 5, 8); // it will allocate 5 column in that it will start writting from right end column.
	printf("The value is:0x%5d0x%6d\n", 5, 8); // it will allocate 5 column in that it will start writting from right end column.
	return 0;

}
