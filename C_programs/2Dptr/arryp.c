#include<stdio.h>
int main()
{
	
	int i = 0, j = 0;
	int a[2][3] = {{1,2,3}, {4,5,6}};
	int *ptr[2];
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d\n", a[i][j]);
		}
	}
	printf("The address of ptr:%p\n", ptr);
	
	for (j = 0; j < 2; j++) {
		ptr[j] = a[j];
		int *p = *(ptr+j);
		for (i = 0; i < 3; i++) { 
			printf("The value is:%d\n", *(p+i));
		}
	}
	return 0;
}
