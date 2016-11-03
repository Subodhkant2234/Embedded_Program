#include<stdio.h>
#include"main.h"
void print(void)
{
	printf("the details of student is :%d..%d\n",abc.rollno,abc.marks);
	abc.rollno=1;
	abc.marks=80;
	printf("the details of student is :%d..%d\n",abc.rollno,abc.marks);
}
 

