#include<stdio.h>
int main()
{
	int a[5];
	int min = 0;
	int i = 0, j = 0;
	printf("Enter the 5 numbers\n");
	for(i=0;i<5;i++)
	scanf("%d", &a[i]);
	min = a[0];
	for (j = 0; j < 5; j++) {
		if(min > a[j])
			min = a[j];
		}
	printf("The min value is :%d\n", min);
	return 0;
}
