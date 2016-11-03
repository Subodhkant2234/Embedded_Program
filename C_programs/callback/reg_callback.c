#include <stdio.h>
#include "reg_callback.h"

void register_callback(callback ptr_reg_callback)
{
	printf("Inside register callback\n");
	(*ptr_reg_callback)(); // calling callback func my_callback
}
