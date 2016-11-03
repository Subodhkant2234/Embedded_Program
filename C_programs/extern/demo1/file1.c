#include "file3.h"  /* Declaration made available here */
#include "prog1.h"  /* Function declarations */

/* Variable defined here */

int increment(void) { 
	global_variable = 37;    /* Definition checked against declaration */
	printf("Global variable :%d\n", global_variable);
	return global_variable++; }
