#include<stdio.h>
int main()
{
	char test[9] = "0";
	int i = 0;
	printf("enter the 9 chars\n");
	for(i = 0; i <= 8; i++) 
		{ 
			test[i] = getchar();
	}
	printf("value:\n");
	printf("%s\n", test);
	return 0;
}
