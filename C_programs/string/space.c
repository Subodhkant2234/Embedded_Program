#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char *p = "   abc adf wdd sadd";
	if(!isspace(*p))
		printf("it is not space\n");
	else 
		
		printf("it is space\n");
	return 0;
}
