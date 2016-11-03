#include<stdio.h>
int main()
{
	typedef struct {
		int data1;
		char data2;
	} my_struct;

	my_struct my_struct1 = {2, 'S'};
	my_struct my_struct2 = {3, 'U'};
//	my_struct1.data1 = 5;
//	my_struct1.data2 = 'A';
	printf("The value of member:%d...%c\n", my_struct1.data1, my_struct1.data2);
	printf("The value of member:%d...%c\n", my_struct2.data1, my_struct2.data2);
	return 0;
}
