#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	
	int i = 0;
	char *a = malloc(30);
	strcpy(a, "sdas,dsfi,vhf");
	const char *b = malloc(5);
	b = ",";
	char *p = malloc(10);
	for(i = 0; i < 3; i++) {
		p = strsep(&a, b);
		printf("The string is : %s\n", p);
	}
	return 0;	

}
