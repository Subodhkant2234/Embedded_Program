#include<stdio.h>
int main(int argc, char *argv[])
{
	int i;
	int count = 0;
	int to = atoi(argv[1]);
	int from = atoi(argv[2]);
	for(i = to; i < from; i++) {
		count ++;
		printf("%d\t", i);
		if(!(count%8))
			printf("\n");
	}	
	return 0;
}

