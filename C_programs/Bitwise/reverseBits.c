#include<stdio.h>
#include<string.h>
void reverse(int);
int main(int argc, char *argv[])
{
		if(argc < 2) {
				printf("Insufficient Arguments\n");
				return 0;
		}
		reverse(atoi(argv[1]));
}

void reverse(int x)
{
	int mask = 1;
	int rev = 0, i = 0;
	for(i = 0; i < 32; i++) {
		if(x & (mask << i))
			rev = rev | (mask << (31 -i));
	}
		printf("Reversed value:%x\n",rev);
}
