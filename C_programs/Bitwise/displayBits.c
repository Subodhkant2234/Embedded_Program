#include<stdio.h>
#include<string.h>
void display(int num);
int main(int argc, char *argv[])
{
	if(argc < 2) {
		printf("Insufficent Arguments\n");
		return 0;
	}
	printf("Enterd number is:%d\n", atoi(argv[1]));
	display(atoi(argv[1]));
	return 0;
}
void display(int num)
{
	int i = 0;
	int mask = 1;
	for(i = 31; i >= 0; i--) {
			(num & (mask << i))? putchar('1'): putchar('0');
			if((i % 8) == 0)
					putchar(' ');
	}
	printf("\n");
}
			
