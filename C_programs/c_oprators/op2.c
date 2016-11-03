#include<stdio.h>
int main()
{
	int a = 1;
	int b = ~a; /* ~ one's complement it is bitwise operator to change 1 to 0 and 0 to 1 */
	printf("The value of b is:%x\n", b);
	return 0;
}

/* Bitwise operators .. &, | , ~ , << , >> , ^ , .. These are the bitwise operators */
/* Relational operators .. < , <= , == , != , > , >= ..if the  relation is true then the value of relational exp is 1 and if it is false then 
   the value of expression is 0 */
/* Logical operators .. &&, ||, ! .. to evaluate expression either true or false */
