#include<stdio.h>

int main()
{
	int a[]={10,20,30,40,50};
	int *ptr=a;
	int x;
	printf("ptr=%u\n",ptr);
	//x=*ptr+1; ==> x=(*ptr)+1
	//x=*(ptr+1); 
	//x=*ptr++;
	//x=++*ptr;// ==> x=++(*ptr)
	x=*++ptr; // x=*(++ptr)
	printf("x=%d,ptr=%u\n",x,ptr);
	return 0;
}
