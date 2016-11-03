#include<stdio.h>
int rightMostSetBit(int num);
int main(int argc, char *argv[]) 
{
	int index;
	if(argc < 2) {
		printf("Insuff Argument\n");
		return;
	}
	index =  rightMostSetBit(atoi(argv[1]));
	printf("The index is:%d\n", index);
	return 0;
}
int rightMostSetBit(int num)
{
	int i = 0;
	for(i=31 ;i>=0; i--) {
			if(num & (1<< i))
				break;
		}
		return i;
}
