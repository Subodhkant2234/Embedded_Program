#include<stdio.h>
#include "reg_callback.h"

void my_callback(void )
{
	printf("Inside my callback\n");
}

int main(void)
{
//	callback ptr_my_callback = my_callback;
	printf("Demo for callback function\n");
//	register_callback(ptr_my_callback);
	register_callback(my_callback);
	printf("Back in main pgm\n");
	return 0;
}


