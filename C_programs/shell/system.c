#include<stdio.h>
#include<stdlib.h>
	int main ()
	{
		int i;
		printf ("Is command processor available\n");
		if (system(NULL))
		{
			printf ("Command processor available!\n");
		}
		else
		{
			printf ("Command processor not available!\n");
			exit (1);
		}

		printf ("Executing command ls\n");
		i=system ("ls");
		printf ("Returned value is: %d.\n",i);
		return 0;
	
       }
