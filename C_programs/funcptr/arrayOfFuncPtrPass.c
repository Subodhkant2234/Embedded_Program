/* array-fp.c */
/* How to Use Arrays of Function Pointers */

#include <stdio.h>
int getSum(int, int);
int getDifference(int, int);
int getProduct(int, int);
int getDivision(int, int);
void arrayFpArgsHandler(int (*(*ptr)[4])(int, int));

int main()
{
		// type-definition: 'functionPtr' now can be used as type
		typedef int (*functionPtr)(int, int);
		// assign the function's address
		functionPtr arrayFp[4] = {getSum, getDifference, getProduct, getDivision};
		int a = 50, b = 20;
		arrayFpArgsHandler(arrayFp);
		printf("Sum of %d and %d : %d\n", a, b, arrayFp[0](a, b));
		printf("Difference of %d and %d : %d\n", a, b, arrayFp[1](a, b));
		printf("Product of %d and %d : %d\n", a, b, arrayFp[2](a, b));
		printf("Division of %d and %d : %d\n", a, b, arrayFp[3](a, b));
		printf("\nProduct of sum and difference of %d and %d is : %d :%d\n", a, b, arrayFp[2](a, b), arrayFp[1](a, b));
}

int getSum(int x, int y)
{
		return x + y;
}

int getDifference(int x, int y)
{
		return x - y;
}

int getProduct(int x, int y)
{
		return x * y;
}

int getDivision(int x, int y)
{
		return x / y;
}

void arrayFpArgsHandler(int (*(*ptr)[4])(int, int))
{
	printf("********sum: %d\n", (*ptr)[0](5,5));	
	printf("********diff: %d\n", (*ptr)[1](5,5));	
	printf("********product: %d\n", (*ptr)[2](5,5));	
	printf("********div: %d\n", (*ptr)[3](5,5));	
}
