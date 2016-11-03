#include<stdio.h>
#include<string.h>
void setPos(int, int);
int main(int argc, char *argv[])
{
		if(argc < 2) {
				printf("Insufficient Arguments\n");
				return 0;
		}
		setPos(atoi(argv[1]), atoi(argv[2]));
}

void setPos(int x, int pos)
{
	int mask = 1 << pos;
	if(!(x & (mask))) {
		x = x | mask;
	}
		printf("setPos value:%x\n",x);
}
