#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void fun(void)
{	
	printf("Func:%s Line:%d, __func__, __LINE__);

	printf("Program going to terminate\n");
}

int main()
{
	
	int a;
	atexit(fun);
	printf("Enter the Number\n");
	scanf("%d", &a);
	printf("%d...\n", a);
	exit(EXIT_SUCCESS);
}
