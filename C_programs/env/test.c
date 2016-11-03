#include<stdio.h>
#include<stdlib.h>
int main ()
{
	char * ptr_path;
	ptr_path = getenv ("VVDN");

	if (ptr_path!=NULL)
		printf ("The set path is: %s",ptr_path);
          else
	  printf("the variable is not set\n");
	return 0;
}
