#include <stdio.h>
void manipulate(int num, int p, int q);
int main(int argc, char *argv[])
{
	if(argc < 3) {
		printf("Insufficient Args\n");
		return;
	}
	manipulate(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
	return 0;
}

void manipulate(int num, int p, int q)
{
	int mask = 0, i = 0;
	printf("\n");
	for(i = 31; i >= 0; i--) {
		num & (1 << i) ? putchar('1'): putchar('0');
		if(!(i%8)) 
			printf(" ");
	}
	printf("\n");
	mask = ~((~mask) << p-q+1) << q;
	num = num ^ mask;
	for(i = 31; i >= 0; i--) {
		num & (1 << i) ? putchar('1'): putchar('0');
		if(!(i%8)) 
			printf(" ");
	}
	printf("\n");
}
