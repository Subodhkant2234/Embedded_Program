#include<stdio.h>
#include<stddef.h>

struct sample
{
	int x;
	int y;
	char c2;
	double z;//offset is 12 not 9
	float f;//offset is 20 not 17
	char c1;//offset is 24
	//char c1,c2,c3,c4,c5;
};
int main()
{
	printf("size=%d\n",sizeof(struct sample));
//	struct sample s1={10,20,5.6};

	printf("offset of x=%d\n",offsetof(struct sample,x));
	printf("offset of y=%d\n",offsetof(struct sample,y));
	printf("offset of c2=%d\n",offsetof(struct sample,c2));
	printf("offset of z=%d\n",offsetof(struct sample,z));
	printf("offset of f=%d\n",offsetof(struct sample,f));
	printf("offset of c1=%d\n",offsetof(struct sample,c1));
	

	return 0;
}
