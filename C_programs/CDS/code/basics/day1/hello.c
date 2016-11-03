#include<stdio.h>
/* a comment */

#define MAX 10

int main()
{
	int y=MAX;
	printf("hello,max=%d\n",y);

	int *p;
	//*p=10;
	y=10/0;

	return 0;
}
