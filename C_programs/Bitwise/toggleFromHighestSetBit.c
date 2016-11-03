#include <stdio.h>
int main()
{
	int i = 0,j = 0;
	int num = 0, index = 0;
	printf("Enter the number\n");
	scanf("%d", &num);
	for(i = 0; i < 32; i++) {
		if(num & (1 << i))
			index = i;
	}
	printf("Highest index:%d\n", index);
	for(j = index; j >=0; j--) {
		if(num & (1 << j)) {
			printf("In if %dth pos val:%d\n", j, num & (1 << j));
			num = num ^ (1 << j);
		}
		else { 
			printf("In else  %dth pos val:%d\n", j, num & (1 << j));
			num = num | (1 << j);
		}
	}
	printf("Number is:%d\n", num);
	return 0;
}
