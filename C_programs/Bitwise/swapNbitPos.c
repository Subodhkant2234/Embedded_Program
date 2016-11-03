#include<stdio.h>
#include<string.h>
int swapPos(int, int, int, int);
int main(int argc, char *argv[])
{
		int y;
		if(argc < 2) {
				printf("Insufficient Arguments\n");
				return 0;
		}
		 swapPos(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
}

int swapPos(int x, int p1, int p2, int n)
{
	int set1 = (x >> p1) & ((1U << n) - 1);
	int set2 = (x >> p2) & ((1U << n) - 1);
	int xor = (set1 ^ set2);
	xor = (xor << p1) | (xor << p2);
	int result=x ^ xor;
	printf("Number is :%d\n", result);
	return result;
}
