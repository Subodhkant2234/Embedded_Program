#include<stdio.h>
void isperfect(int, int);
int main(int argc, char *argv[])
{
		if(argc < 2) {
				printf("Insufficient Arguments\n");
				return;
		}
		isperfect(atoi(argv[1]), atoi(argv[2]));
		return 0;
}

void isperfect(int p, int q)
{
		int i = 0, k = 0;
		int tmp, sum = 0;
		for(i = p; i < q; i++) {
				for(k = 1; k < i; k++) {
						if(!(i%k)) {
								sum = sum + k;	
						}
				}
				if(i == sum)
						printf("Perfect  Number:%d\n",sum);
				sum = 0;
		}
}
