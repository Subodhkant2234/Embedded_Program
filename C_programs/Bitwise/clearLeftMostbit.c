#include<stdio.h>
#include<string.h>
void clearLeftmostSetBit(int num);
void clearRightmostSetBit(int num);
void displayBits(int num);
int main(int argc, char *argv[])
{
		int input;
		if(argc < 2) {
				printf("Insufficent Arguments\n");
				return 0;
		}
		printf("Enterd number is:%d\n", atoi(argv[1]));
		displayBits(atoi(argv[1]));
		while(1) {
				printf("Enter 1/2/3 for clear left/right/quit most bit\n");
				scanf("%d", &input);
				switch(input) {
						case 1:	clearLeftmostSetBit( atoi(argv[1]));
								break;
						case 2:	clearRightmostSetBit(atoi(argv[1]));
								break;
						case 3: 
								return;
						default:
								printf("not A valid Input\n");
				}
		}
		return 0;
}
void clearLeftmostSetBit(int num)
{
		int i = 0;
		int index;
		for(i = 31; i >= 0; i--) {
				if(num & (1 << i)) {
						index = i;
						num = num ^ (1 << i);
						break;	
				}
		}
		displayBits(num);

}
void clearRightmostSetBit(int num)
{
		num = num & (num -1);
		displayBits(num);
}	
void displayBits(int num)
{
		int i = 0;
		for(i = 31; i >= 0; i--) {
				(num & 1<<i) ? putchar('1'):putchar('0');
				 if(!(i%8))
					printf(" ");
		}
		printf("\n");
}	
