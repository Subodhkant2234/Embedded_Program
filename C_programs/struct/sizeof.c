#include<stdio.h>
struct ABC{
	char abc[10];
	int a;	
};
int main()
{
	struct ABC *abc = 0;
	printf("Size is :%d\n", abc);
	abc++;
	printf("Size is :%d\n", abc);
	 return 0;

}
