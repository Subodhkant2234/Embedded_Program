#include<stdio.h>
int main()
{
	typedef struct MyStruct {
		int data1;
    		char data2;
	} newtype;	
	newtype my_struct, my_struct2;
	my_struct.data1 = 5;
	my_struct.data2 = 'A';	
	printf("The updated value of structure is:%d..%c\n", my_struct.data1, my_struct.data2);
	return 0;
}
