#include<stdio.h>
#include<stdlib.h>

struct f_data
{
int a;
int b;
};

struct data
{
int index;
struct f_data d;
};

int save(struct f_data s, struct data *p)
{
	static int i=0;
	p[0].index=i;
	p[0].d=s;
	i++;
	printf("The value of data structre in save function:%d..%d...%d\n",p[0].index, p[0].d.a, p[0].d.b);
	return i;
}

int main()
{
	int i, j;
	struct data *a[3];
	struct f_data x = {5,10};
	for (j = 0; j < 3; j++) {
		a[j] = malloc(4);
	}
	printf("get f_data \n");
	scanf("%d %d",&x.a,&x.b);
	printf("the data send are %d %d\n",x.a,x.b);
	i=save(x,a[0]);
	printf("return %d",i);
	return 0;
}
