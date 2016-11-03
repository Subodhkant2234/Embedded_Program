#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number of elements to be element\n");
	scanf("%d\n",&num);
	int a[num];
	int i = 0, j = 0;
	for(i = 0; i < num; i++) {
		scanf("%d", &a[i]);	
	}
	for(i = 0; i < num; i++) {
		printf("a[%d]:%d\n", i, a[i]);
	}
	i = 0;
	j = num - 1;
	while(i < j) {
		a[i] = a[i] ^ a[j];
		a[j] = a[i] ^ a[j];
		a[i] = a[i] ^ a[j];
		i++;
		j--;
	}	
	for(i = 0; i < num; i++) {
		printf("a[%d]:%d\n", i, a[i]);
	}
	return 0;
}
