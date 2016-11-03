#include<stdio.h>

int main()
{
	int a = 1234;
	float x,y;
	x= 35.141592;
	y=14.4;
	printf("%2.4f \n",y);
#if 0
	printf("%-5.2f \n",y);
	printf("%x\n", a);
	printf("%06x\n", a);
	printf("%-4x\n", a);
#endif 
//	printf("%-6d\n", a);
	return 0;
}

