#include<stdio.h>
typedef enum {on=10, off=100} function;// The definition of enum does not include tag name ....its just used for defining constants.
int main()
{
	function a;
	a = on;
	int b = a+5;
	printf("The value of enum is:%d..%d...%d...%d\n", on, off, a, b);
	return 0;
}


