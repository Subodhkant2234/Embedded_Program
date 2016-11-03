
#include<stdio.h>

struct student
{
	int rollno;
	char sname[20];//char *psname;
	double marks;
}sg1,sg2={105,"abc",64.23};

//struct student sg1,sg2={105,"abc",64.23};

int main()
{
	struct student s1={101,"abcd",79.23};
	struct student s2,s3;
	s2.rollno=102;
	strcpy(s2.sname,"xyz"); //s2.sname="xyz";
	s2.marks=75.23;
	printf("enter student details\n");
	scanf("%d%s%lf",&s3.rollno,s3.sname,&s3.marks);

	printf("rollno=%d,name=%s,marks=%lf\n",
		s1.rollno,s1.sname,s1.marks);

	return 0;
}
	



	
