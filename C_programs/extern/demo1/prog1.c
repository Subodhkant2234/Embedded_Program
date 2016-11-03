#include "file3.h"
#include "prog1.h"
#include <stdio.h>

int main(void)
{
   	global_variable = 5;
	 printf("Global variable :%d\n", global_variable);
	use_it();
    global_variable += 19;
    use_it();
    printf("Increment: %d\n", increment());
    return 0;
}
