#include<stdio.h>

int main()
{
	char s1[20];
	printf("enter s1\n");
	gets(s1);
	//mygets(s1);

	myprint("abcdxyz\n");
	myprint("string is:");
	myprint(s1);
	return 0;
}
char* mygets(char *pstr)
{
	char ch, *pstart=pstr;
	while( (ch=getchar())!='\n' )
	{
		*pstr++=ch;
	}
	*pstr='\0';
	return pstart;
}
int myprint(const char* pstr)
{
	int k=0;
	while(*pstr!=0) //while(*pstr)
	{
		putchar(*pstr++);
		k++;
	}
	return 0;
}
/*
 int myprint(const char[])
int myprint(const char astr[])
{
	int k=0;
	while(astr[k]!='\0') //astr[k]!=0 //astr[k]
	{
		putchar(astr[k]);
		k++;
	}
	return k;
}*/
