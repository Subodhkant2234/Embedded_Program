#include<stdio.h>
#include<stdlib.h>
struct student {
		int rollno;
		float marks;
		char  name[20];
};
int main()
{
	struct student *p = 0;
	p++;
	printf("size of struct:%d\n", p);
	return 0;
}
