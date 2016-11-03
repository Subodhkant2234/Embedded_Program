#include<stdio.h>
#include<string.h> //libc.a or libc.so

int main()
{
	char s1[20],s2[20],s3[20];

	printf("enter a string\n");
	scanf("%[^\n]s",s1);

	int n=strlen(s1);
	printf("length=%d\n",n);

	strcpy(s2,s1);
	printf("s2=%s\n",s2);

	strcpy(s3,"xyz");//can't use s3="xyz"
	strcat(s2,s3);
	printf("s2=%s,s3=%s\n",s2,s3);

	printf("enter two strings\n");
	scanf("%s%s",s1,s2);
	int k=strcmp(s1,s2);
	if(k==0)
		printf("equal\n");
	else
	{
		printf("not equal\n");
		//k is +1 or -1?
	}

	return 0;
}
