#include<stdio.h>
#define MAX 7
int main()
{
	int i = 0;
	int count = 0;
	int j, k = 0;
	int a[MAX];
	for (i = 0; i < MAX; i++) {
		scanf("%d", &a[i]);
		printf("The value:%d... in array in index:%d\n", a[i], i);
	}
	for(j = 0; j < 7; j = k) {
		k = a[j];
		if ((k == 100) || (k == -1) || (k == 0)) {
			printf("Count value:%d\n", count);
			break;
		}
		else {
			count++;
		}
        }
	return 0;
}
