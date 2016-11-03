#include<stdio.h>
int main(int argc, char *argv[])
{
	int no, i;
	int a;
	int c;
	int b;
	no = atoi(argv[1]);
	if(no == 0 || no == 1) {
		printf("No is fib :%d\n", no);
		return;
	} else {
		a = 0;
		b = 1;
		c = b + a;
		while(c < no) {
			a = b;
			b = c;
			c = b + a;
		}
	}
	if(c == no)
	printf("%d is fib \n", c);
	return 0;
}

