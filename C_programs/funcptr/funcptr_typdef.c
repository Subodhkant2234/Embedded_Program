#include <stdio.h>
#include <stdlib.h>

void func(int);
typedef void (*fp)(int);
void func_test(fp );

int main()
{
	func_test(func);	
	return 0;
}

void func(int arg) {
      printf("In Function :%s %d\n", __func__, arg);
}

void func_test(fp var) {
	int b =10;
	var(10);
	printf("In function :%s\n", __func__);
}
