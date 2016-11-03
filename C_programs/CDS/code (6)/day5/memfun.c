#include<stdio.h>
#include<string.h>

int main()
{
	int a[]={10,20,30,40,50};
	int b[]={10,20,31,40,50};
	int c[10],i;

	if(memcmp(a,b,sizeof(a))==0)
		printf("equal\n");
	else
		printf("not equal\n");

	memcpy(c,a,20);//what is inside rest of 20 bytes?
	for(i=0;i<5;i++)
		printf("%d\n",c[i]);
	memcpy(c+5,b,20);//loop of 20 iters will be used

	int x[8];
	memset(x,0,20);
	for(i=0;i<8;i++)
		printf("%d\t",x[i]);
	printf("\n");

	char str[10];
	str[9]=0;
	memset(str,0x41,9);
	printf("str=%s\n",str);

	bzero(x,32); //network prog
	//study memchr,memrchr
	return 0;
}




