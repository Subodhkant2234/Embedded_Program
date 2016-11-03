#include<stdio.h>
int main()
{
	int a[6];
	int temp;
	int i = 0, j = 0;
	printf("Enter the temp\n");
	scanf("%d", &temp);
	printf("Enter the 5 numbers\n");
	for(i=0;i<5;i++)
	scanf("%d", &a[i]);
	for (j = 4; j >=0; j--) {
		if (temp <= a[j])
			a[j+1] = a[j];
		else if (temp > a[j]) {
				a[j+1] = temp;	
				break;
			}
		}
	
	for(i=0;i<6;i++)
		printf("Elements:%d\n", a[i]);
	return 0;
}
