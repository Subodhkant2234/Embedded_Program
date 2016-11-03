#include<stdio.h>
#include<string.h>

int main()
{
	char tstr[5][10];
	int i;
	printf("enter the strings\n");
	for(i=0;i<5;i++)
		scanf("%s",tstr[i]);
	//char kstr[10];
	//read kstr
	//compare kstr with each of tstr[i], i=0 to 4
	//do sorting if u can
	
	//swap row1, row2
	char temp[20],j=1,k=2;
	/*ps=tstr[1];
	tstr[1]=tstr[2];
	tstr[2]=ps;*/
	strcpy(temp,tstr[j]);
	strcpy(tstr[j],tstr[k]);//deep copy
	strcpy(tstr[k],temp);

	printf("strings are\n");
	for(i=0;i<5;i++)
		printf("%d--%s\n",i,tstr[i]);

	char *pstr[5],*ps;//array of char pointers
	for(i=0;i<5;i++)
		pstr[i]=tstr[i];
	j=3;k=4;
	ps=pstr[j];
	pstr[j]=pstr[k]; //shallow copy
	pstr[k]=ps;
	printf("strings are\n");
	for(i=0;i<5;i++)
		printf("%d--%s,%s\n",i,tstr[i],pstr[i]);

	return 0;
}
