#include<stdio.h>

void test();

int main()
{
	test();
	test();
	test();
	//k++; --error
	return 0;
}
void test()
{
	//int m=0; -- lifetime?
	static int k=10;
	//int k=0; //--error,redefinition
	k++;
	printf("%d\n",k);
}


