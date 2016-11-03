#include<stdio.h>
#include<string.h>
int swapPos(int, int, int);
int main(int argc, char *argv[])
{
		int y;
		if(argc < 2) {
				printf("Insufficient Arguments\n");
				return 0;
		}
		y = swapPos(atoi(argv[1]), atoi(argv[2]) , atoi(argv[3]));
		printf("The Swapped value :%d\n", y);
}

int swapPos(int number, int pos1,  int pos2)
{
	int temp1, temp2;
	long int base, base1;
	int set1 = (number >> pos1);
	int set2 = (number >> pos2);
	int pos1_val = set1 & 1;
	int pos2_val = set2 & 1;
	
	if(pos1_val == 1) {
		base1 = 1 << pos2;
		number = number + base1;
	}
	if(pos2_val == 1) {
		base1 = 1 << pos1;
		number = number + base1;
	}
	if(pos1_val == 0) {
		base = 0xFFFFFFFF;
		base1 = 1 << pos2;
		temp1 = base ^ base1;
		number = number & temp1;
	}
	if(pos2_val == 0) {
		base = 0xFFFFFFFF;
		base1 = 1 << pos1;
		temp2 = base ^ base1;
		number = number & temp2;
	}
	return number;

}
