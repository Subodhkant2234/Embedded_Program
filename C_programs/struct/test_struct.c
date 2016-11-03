#include<stdio.h>
#include<stdlib.h>

struct student {
	char name[15];
	int rollno;
 };
int main()
{
	struct student *clg = malloc(5 * sizeof(struct student));
	if (clg == NULL) {
		perror("error in memory");
		exit(EXIT_FAILURE);
	}
	printf("The address is:%p..%p..%p..%p..%p\n", clg, clg + 1, clg + 2, clg + 3, clg + 4);
	return 0;
}
