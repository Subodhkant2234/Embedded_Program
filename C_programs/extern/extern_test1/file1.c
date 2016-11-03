#include "header.h"
#include<stdio.h>
int a = 5;

int increment(void)
{	
	
/*	int a = 5; It can't be local to function as it will not be visible in other file which will be looking 
                   for definition at linking time so it's scope will be local and give error of undefined ref when not get a definition. */
	
	printf("The a value:%d in function:%s\n", a, __func__);
	a = 500;
	return (++a);
}
