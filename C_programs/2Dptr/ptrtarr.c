#include<stdio.h>
int main()
{
	
	int i = 0,j = 0;
	int a[2][3] = {{1,2,3}, {4,5,6}};
	int (*ptr)[3];
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d\n", a[i][j]);
		}
	}
	
	ptr = a;
	printf("The address of ptr:%p and value is %d\n", ptr, **ptr);
//	ptr++; //This will make ptr to jump to 12 bytes and get it to 2nd row of 2d array.
//	printf("The address of ptr:%p\n", ptr);
	
	for (i = 0; i < 2; i++) {
			ptr = ptr + i;
			for (j = 0; j < 3; j++) { 
				printf("The value is:%d\n", *((*ptr) + j));
			}
	}
	return 0;
}
