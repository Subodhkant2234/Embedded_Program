#include<stdio.h>
#include<malloc.h>

struct stud {
	int rollno;
	char name[20];
	double marks;
};
	
int main()
{
	int *p=NULL;
	//*p=12; //
	p=malloc(sizeof(int));//malloc(4)
	//p=(int*)malloc(4);

	*p=20;
	printf("val=%d\n",*p);

	double* q=malloc(8);
	*q=2.35;
	printf("*q is %lf\n",*q);

	free(p);p=NULL;
	free(q);q=NULL;
	//int x=*p; --segmentation fault for sure,if p is NULL
	//some code
	

	struct stud* ps;
	ps=malloc(sizeof(struct stud));
	ps->rollno=101;
	strcpy(ps->name,"abcd");
	ps->marks=79.23;//ps->name="abc";
	//print details
	free(ps); ps=NULL;

	
	printf("Thank you\n");
	return 0;
}
