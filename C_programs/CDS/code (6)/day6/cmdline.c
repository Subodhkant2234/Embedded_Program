#include<stdio.h>

int main(int argc,char*argv[])
{
	printf("no.of args:%d\n",argc);
	printf("prog/process name is %s\n",argv[0]);
	int i;
	for(i=1;i<argc;i++)
	{
		printf("%d--%s\n",i,argv[i]);
		printf("%u,%u\n",&argv[i],&argv[i][0]);
	}
	strcpy(argv[1],"xyz");
	argv[1][0]++;
	printf("%s\n",argv[1]);

	return 0;
}
