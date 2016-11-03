#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define DEBUG_NDDMP
#ifdef DEBUG_NDDMP
     #define   DEBUG_LOG(message)   printf message
#else
     #define  DEBUG_LOG(message)
#endif
int main()
{
	char a[10];
	strcpy(a, "hello");
	DEBUG_LOG(("The a val:%s\n", a));
	return 0;
}
