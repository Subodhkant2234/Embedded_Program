#include<stdio.h>

int main()
{
	char s1[20],s2[20],ch;

	printf("enter s1\n");
	//scanf("%s",s1); //upto space
	//gets(s1); //upto new line
	scanf("%[^\n]s",s1); //upto new line
	printf("enter s2\n");
	scanf("%s",s2); //gets(s2);
	printf("enter ch\n");
	//__fpurge(stdin);
	//ch=getchar();
	scanf(" %c",&ch);

	printf("s1=%s,s2=%s\n",s1,s2);
	printf("ch=%c,ch=%d\n",ch,ch);

	char str[100];
	sprintf(str,"Hello,x=%d,y=%f\n",10,2.3f);
	puts(str);

	const char *nstr="10 2.3A";
	int x;float y;char c1;
	sscanf(nstr,"%d%f%c",&x,&y,&c1);
	printf("x=%d,y=%f,c1=%d\n",x,y,c1);

	return 0;
}




