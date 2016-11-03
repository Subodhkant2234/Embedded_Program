#include<stdio.h>
#include<linux/types.h>

int main()
{
	__u32 a;
	printf("Enter the value of a\n");
	scanf("%d", &a);
	printf("The value of a : %d\n", a);
	return 0;
	
}
