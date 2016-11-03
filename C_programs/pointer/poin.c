#include<stdio.h>
#include<string.h>

int main()
{	
	#if 0
	int *p = NULL;
	printf("The address p:%p\n", p);
	printf("Value p:%d\n", *p);
	#endif 
	int a[2] = {NULL};// NULL is a symbolic constant defined in stddef.h as (void *)0.
	printf("The value of a[0] :%d a[1]:%d\n", a[0], a[1]);
}
