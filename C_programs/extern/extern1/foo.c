#include <stdio.h>
#include "foo.h"
static void bar(void)
{
	printf("2 var address:%p val:%d\n", &var, var);
	printf("I'm bar(), and I can only be called from within foo.c\n");
}

void foo(void)
{
	printf("I'm foo(), and I can be called from any file that includes foo.h\n");
	bar();
}


