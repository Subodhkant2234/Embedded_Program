#include<stdio.h>
int main()
{
	int a[5];
	int max = 0, secMax;
	int index;
	int i = 0, j = 0, k;
	printf("Enter the 5 numbers\n");
	for(i=0;i<5;i++)
	scanf("%d", &a[i]);
	for (j = 0; j < 5; j++) {
			for(i = 0; i < 4-j; i++) {
			if(a[i] > a[i+1]) {
				max = a[i];
				a[i] = a[i+1];
				a[i+1] = max;
			}
		}
	}
		for(k = 0; k < 5; k++) {
			printf("Elements:%d\n", a[k]);
		}
	return 0;
}
