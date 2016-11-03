#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define DEBUG_NDDMP
#ifdef DEBUG_NDDMP
     #define   DEBUG_LOG  printf
#else
     #define   DEBUG_LOG  
#endif
int main()
{
	char a[10];
	char b[10] = "word";
	strcpy(a, "hello");
	DEBUG_LOG("The a val:%s b:%s\n", a, b);
	return 0;
}
