#include<stdio.h>
#define GET_ARRAY_LEN( arrayName ) (sizeof( arrayName ) / sizeof(( arrayName)[ 0 ] ))

int main()
{
	
	int arr[3] = {1, 2, 3};
	printf("The array size is:%ld\n", GET_ARRAY_LEN(arr));
	return 0;

}
