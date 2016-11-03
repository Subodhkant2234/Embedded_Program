#include<stdio.h>

int main()
{
	int a = -2;
	/* The operator ! is logical not operator ...in logical oprator expression return 0 for false and 1 for true */
	if (!a) {
		printf("This is will be printed if a is 0\n");
	} else {
		printf("This will be printed if a has some value other than 0\n");
	}
	return 0;
}
