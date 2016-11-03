#include<stdio.h>
void isPrime(int, int);
int main(int argc, char *argv[])
{
		if(argc < 2) {
				printf("Insufficient Arguments\n");
				return;
		}
		isPrime(atoi(argv[1]), atoi(argv[2]));
		return 0;
}

void isPrime(int p, int q)
{
		int i, j = 0;
		int count = 0;
		for(j = p; j < q; j++) {
				for(i = 1; i < q; i++) {
						if(!(j%i)) {
								count++;
						}
				}
				if(count == 2)
					printf("primeNumber:%d\n", j);
					count = 0;
		}
}
