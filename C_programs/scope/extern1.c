#include<stdio.h>
#include "extern.h"
int GlobalVariable;         // explicit definition, this actually allocates as well as describing
void SomeFunction(void);        // function prototype (declaration), assumes defined elsewhere, normally from include file.
int main() {
	GlobalVariable = 1;
	SomeFunction();
	printf("the value of variable is :%d\n",GlobalVariable);
	printf("we are in the file:%s\n",__FILE__);
	return 0;
}
