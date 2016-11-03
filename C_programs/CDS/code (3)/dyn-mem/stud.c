#include<stdio.h>

struct employee
{
	int empid;
	char* ename;
	double salary;
};
typedef struct employee* pemp;

int main()
{
	pemp ptr,pbak;
	ptr=malloc(sizeof(struct employee));

	ptr->empid=1001;
	ptr->salary=10000;
	ptr->ename=malloc(20);
	strcpy(ptr->ename,"abcd");

	//print data
	
	pbak=ptr;
	free(ptr->ename);
	free(pbak);
	//free(ptr->ename);
	return 0;
}





