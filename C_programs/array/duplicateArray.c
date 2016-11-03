#include<stdio.h>
int main()
{
	int a[5];
	int index = 0;
	int i = 0, j = 0, k = 0;
	int flag = 0, count = 0;
	printf("Enter the 5 numbers\n");
	for(i=0;i<5;i++)
	scanf("%d", &a[i]);
	for (i = 0; i < 5; i++) {
		for (j = i+1; j < 5; j++) {
			if(a[i] == a[j]) {
					index = j;
					flag=1;
					count ++;
					break;
			}
		}
		if(flag == 1 ) {
			for(k=index; k < 5; k++) {
					a[k] = a[k+1];
				}
				flag = 0;
			}
	}
	printf("The duplicate index is :%d\n", index);
	for(i=0;i < 5-(count-1);i++)
		printf("Element:%d\n",a[i]);
	return 0;
}
