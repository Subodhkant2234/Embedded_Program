#include<stdio.h>

int main()
{
	int i = 0;
	int c = 15;
	union test {
		int b;
		char a[4]; // Only 4 bytes of Memory allocated because of union it's data is shared between data members of union.
	}var;
	var.b = c; // Give your number what u need to split in bytes.
	for (i = 0; i < 4; i++) {
		printf("The %dth byte:%d\n", i, var.a[i]); // From this we can conclude our system is little endian,As LSB go to lower address.
	}
	return 0;
}
