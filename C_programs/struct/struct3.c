#include<stdio.h>
int main()
{
struct student {
	int a;
	char name[20];
	};
	struct student st;
	printf("The size of struct:%d...%d\n", sizeof(st), sizeof(struct student));
	return 0;
   // Standard way to find the size of structure is sizeof(struct student) in above 2 cases student is a tag name.
}
