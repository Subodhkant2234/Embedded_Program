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
	max = a[0];
	for (j = 0; j < 5; j++) {
		if(max < a[j]) {
			max = a[j];
			index = j;
		}
	}
	printf("The max value is :%d\n", max);
	/* for 2nd largest element */
	   secMax = a[0];
		for(k = 0; k < 5; k++) {
				if(secMax < a[k] && k != index)
					secMax = a[k];
		}
	printf("The secMax value is :%d\n", secMax);
	return 0;
}
