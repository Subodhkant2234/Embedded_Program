#include<stdio.h>


/*#ifdef STD89
	typedef int int16;
	typedef long int int32;
#endif
#ifdef STD99
	typedef short int16;
	typedef int int32;
#endif*/

//#define STD99 1
//#define STD89 0
#if STD89 
	typedef int int16;
	typedef long int int32;
#elif STD99
	typedef short int16;
	typedef int int32;
#endif

int main()
{
	printf("%d,%d\n",sizeof(int16),sizeof(int32));
	int16 x;
	int32 y;

	return 0;
}
