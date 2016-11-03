#include<stdio.h>
#include<stddef.h>

struct sample
{
	int x;
	int y;
	double z;
	float f;
};
int main()
{
	printf("size=%d\n",sizeof(struct sample));
	struct sample s1={10,20,5.6};

	printf("offset of x=%d\n",offsetof(struct sample,x));
	printf("offset of y=%d\n",offsetof(struct sample,y));
	printf("offset of z=%d\n",offsetof(struct sample,z));
	printf("offset of f=%d\n",offsetof(struct sample,f));
	
	void *pbase=&s1,*pv;
	//pv=pv+sizeof(int); 
	pv=pbase+offsetof(struct sample,y);
	printf("y=%d\n",  *( (int*)pv )  );

	//pv+=4;
	pv=pbase+offsetof(struct sample,z);
	printf("z=%lf\n", *( (double*)pv ) );

	return 0;
}
