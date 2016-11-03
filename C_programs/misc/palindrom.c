#include<stdio.h>
void ispalindrome(int, int);
int main(int argc, char *argv[])
{
		if(argc < 2) {
				printf("Insufficient Arguments\n");
				return;
		}
		ispalindrome(atoi(argv[1]), atoi(argv[2]));
		return 0;
}

void ispalindrome(int p, int q)
{
		int i, j = 0;
		int tmp, sum = 0, rem;
		for(i = p; i < q; i++) {
			tmp = i;
			while(tmp){
				rem = tmp%10;
				tmp = tmp/10;
				sum = (sum*10) + rem;
			}
		if(i == sum)
			printf("Plaindrome:%d\n",sum);
		sum = 0;
		}
}
