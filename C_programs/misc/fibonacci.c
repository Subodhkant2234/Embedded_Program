#include<stdio.h>
int main()
{
	int nterms, i;
	int a = -1;
	int c;
	int b = 1;
	printf("Eneter the number of terms\n");
	scanf("%d", &nterms);
	c = b + a;
	a = b;
	b = c;
	for(i =0; i < nterms; i++) {
		c = b + a;
		a = b;
		b = c;
		printf("Series are : %d\n", c);
	}
	return 0;
}

