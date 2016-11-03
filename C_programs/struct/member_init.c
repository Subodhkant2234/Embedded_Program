#include<stdio.h>

struct student {
	char name[20];
	int rollno;
	};

int main()
{
	struct student graduate = {"shayam", 1};
	printf("The student details are:%s..:%d\n", graduate.name, graduate.rollno);
	return 0;
}
