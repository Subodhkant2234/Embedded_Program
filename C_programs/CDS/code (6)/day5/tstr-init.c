#include<stdio.h>
#include<string.h>

int main()
{
	char tstr[5][12]={"sunday","monday",
		"tuesday","wednesday","thursday"};
	int i;
	tstr[1][0]='M';
	tstr[1][3]='D';
	//tstr[3]="hello";
	strcpy(tstr[2],"hello"); //gets,scanf also ok
	for(i=0;i<5;i++)
	{
		printf("%d--%s\n",i,tstr[i]);
		printf("%u,%u\n",&tstr[i][0],&tstr[i]);
	}

	char astr[][6]={"sun","mon","tue","wed","thu",
			"fri","sat","abcd" };
	printf("size=%d\n",sizeof(astr));

	char *vstr[5]={"hello","sun","mon","tue","abcd"};
	//vstr[0][0]='A';
	//strcpy(vstr[1],"123");
	char *ps=vstr[1];
	vstr[1]=vstr[2];
	vstr[2]=ps;

	for(i=0;i<5;i++)
	{
		printf("%d--%s\n",i,vstr[i]);
		printf("%u,%u\n",&vstr[i][0],&vstr[i]);
	}

	char *pstr[5];//only pointers,no memory
	//strcpy can't be used
	char **qstr=vstr;
	//access strings using qstr
	return 0;
}

