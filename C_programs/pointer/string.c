#include<stdio.h>
#include<string.h>

int main()
{	
	int a = 5;
	int *p = &a;
	printf("The address &a:%p..p:%p..\n", &a, p);
	&p = &a;
	printf("The address p:%p..*p:%p..\n", p, *p);
	


}
