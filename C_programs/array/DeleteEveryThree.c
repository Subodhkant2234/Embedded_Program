#include<stdio.h>
int main()
{
	int a[11], b[11];
	int i = 0, j = 0, k = 0;
	int flag = 0, count = 0;
	printf("Enter the 10 numbers\n");
	for(i=0;i<10;i++)
	scanf("%d", &a[i]);
	for (i = 0; i < 10; i++) {
			count++;
			if(count%3) {
			b[j++] = a[i];
		}
	}
	for(i= 0; i < j; i++)
		printf("Number:%d\n", b[i]);
	return 0;
}
