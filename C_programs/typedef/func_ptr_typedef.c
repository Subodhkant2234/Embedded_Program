#include<stdio.h>
int add(int a, int b)
{
	return (a+b);
}
int minus(int a, int b)
{
	return (a-b);
}

typedef int (*math_func)(int, int); //declaration of function pointer and typedef here for readablity .

int main()
{
	math_func addition = add;  //typedef assigns a new variable i.e. "addition" to original function "add"
	math_func substract = minus; //typedef assigns a new variable i.e. "substract" to original function "minus"
//	int c = addition(11, 11);   //calling function via new variable
	int c = (*addition)(10, 20);
	printf("%d\n",c);
	c = substract(11, 5);   //calling function via new variable
	printf("%d\n",c);
	return 0;
}
