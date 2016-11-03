#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct {
	char name[15];
	int rollno;
 } student;

int main()
{
	strcpy(student.name, "hello");
	student.rollno = 10;
	printf("%s...%d\n", student.name, student.rollno);
	return 0;
}
