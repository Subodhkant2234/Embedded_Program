#include<stdio.h>
void swap(int *, int  *);
int main()
{
	int a = 0, b = 0;
	printf("Enter the Integer to be reversed\n"); 
	scanf("%x %x", &a, &b);
	printf("Entered value:a:%x : b:%x\n",a, b);
	swap(&a, &b);
	printf("Entered value:a:%x : b:%x\n",a, b);
}
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
