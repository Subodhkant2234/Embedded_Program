#include<stdio.h>

int main()
{
	int x=10,y=20;
	
	int *p1=&x;
	p1=&y; //ok
	p1++;  //ok
	(*p1)++; //ok
	*p1=15;  //ok

	//int const* p2;
	const int* p2; //pointer to const
	p2=&x;
	*p2=15; //error
	(*p2)++; //error
	p2=&y; //ok
	p2++;  //ok
	x++; //ok
	int *q=&x;
	*q=18; //ok

	int* const p3=&x; //constant pointer
	*p3=18;  //ok
	(*p3)--; //ok
	p3=&y;   //error
	--p3;    //error

	const int* const p4=&x;
	//const pointer to const
	
	return 0;
}
