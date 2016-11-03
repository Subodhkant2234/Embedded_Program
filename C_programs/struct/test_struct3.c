#include<stdio.h>
struct foo {
	int a;
	char name[10];
	};

struct bar {
	struct foo test;
	int b;
	};

int main()
{
	struct foo test ;//= {4, "driver"};	
	struct bar abc ;//= {test, 8};
	printf("The value in foo struct is:%d..%s\n", test.a, test.name);
	printf("The value in bar struct is:%d......%s.....%d\n", abc.test.a, abc.test.name,abc.b);
	return 0;
}
