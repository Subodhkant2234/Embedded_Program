#include<stdio.h>

//void change(int);
void change(int*);
int main()
{
	int x=10;
	//change(x);
	change(&x);
	printf("x=%d\n",x);
	return 0;
}
/*void change(int x)
{
	x++;
}*/
void change(int *p)
{
	*p=20;
}




