#include<stdio.h>

#define SOLARIS 1

int main() 
{
	#if LINUX
		printf("This is Linux OS\n");
	#elif  UNIX
		printf("This is unix\n");
	#elif  SOLARIS
		printf("This is solaris\n");
	#else
		printf("Unknown platform\n");
	#endif
	
//#undef LINUX
//#define LINUX 0

	#ifndef LINUX
		printf("Linux is not defined\n");
	#else
		printf("linux is defined\n");
	#endif

	#undef SOLARIS
	

	#if LINUX
		printf("linux is true\n");
	#else
		printf("linux val is false\n");
	#endif
	return 0;
}
