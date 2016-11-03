#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define DEBUG_NDDMP
#ifdef DEBUG_NDDMP
     #define   DEBUG_LOG(a, b...)   fprintf(stdout, a, ##b)
#else
     #define   DEBUG_LOG(a, b...)     do {} while (0)
#endif
int main()
{
	char a[10];
	char b[10] = "word";
	strcpy(a, "hello");
	DEBUG_LOG("The a val:%s \n", a);
	return 0;
}
