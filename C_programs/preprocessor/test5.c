#include<stdio.h>

#define paster( n ) printf( "token" #n " = %d", token##n )

int main()
{

	int token9 = 9;
	paster(9);
}
