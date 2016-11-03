#include<stdio.h>
#include<string.h>

int main()
{	
	#if 0
	int *p = NULL;
	printf("The address p:%p\n", p);
	printf("Value p:%d\n", *p);
	#endif 
	#if 0
	int a[2] = {NULL};// NULL is a symbolic constant defined in stddef.h as (void *)0.
	printf("The value of a[0] :%d a[1]:%d\n", a[0], a[1]);
	#endif 
	int a = 0x11223344;
	printf("The address of variable is:%p\n", &a);
	char *p = (char *)&a;
	printf("The address stored in Pointer:%p Value:%x\n", p, *p);
	return 0;

}
