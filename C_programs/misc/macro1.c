#include<stdio.h>
#define foo my_foo

int foo();
int main()
{

	foo();

}

int foo()
{
	printf("In foo function:%s\n", __func__);
	return 0;
}
