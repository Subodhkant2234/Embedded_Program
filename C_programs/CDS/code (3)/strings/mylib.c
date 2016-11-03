#include<stdio.h>

int main()
{
	char s1[20],s2[20],s3[20];

	printf("enter a string\n");
	scanf("%[^\n]s",s1);

	int n=mystrlen(s1);
	printf("length=%d\n",n);

	strcpy(s2,s1);
	printf("s2=%s\n",s2);

	strcpy(s3,"xyz");//can't use s3="xyz"
	mystrcat(s2,s3);
	printf("s2=%s,s3=%s\n",s2,s3);

	/*printf("enter two strings\n");
	scanf("%s%s",s1,s2);
	int k=mystrcmp(s1,s2);
	if(k==0)
		printf("equal\n");
	else
	{
		printf("not equal\n");
		//k is +1 or -1?
	}*/

	return 0;
}
char* mystrcat(char *pdest,const char* psrc)
{
	char *pbase=pdest;
	while(*pdest)
		pdest++;
	/*while(*psrc){
		*pdest=*psrc;
		pdest++;
		psrc++;
	}
	*pdest=0;*/
	while(*pdest++=*psrc++);

	return pbase;
}
int mystrlen(const char* pstr)
{
	char *pstart=pstr;
	//int k=0;
	/*while(*pstr!='\0')
	{
		k++;
		pstr++;
	}*/
	/*while(*pstr++) k++;
	return k; */
	while(*pstr++); //verify
	return pstr-pstart-1;
}




