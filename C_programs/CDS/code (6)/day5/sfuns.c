#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="abcdxyz";

	rdisplay(str);
	printf("\n");

	char s1[]="abcdxyzabc";
	char *ps;

	ps=strchr(s1,'d');
	//puts(ps);
	printf("ps=%u,pos=%d\n",ps,ps-s1);

	ps=strrchr(s1,'b');
	printf("last pos:%d\n",ps-s1);

	ps=strchr(s1,'+');
	printf("ps=%u\n",ps); //NULL

	char s2[]="cdx";
	ps=strstr(s1,s2);
	printf("ps=%p,substring pos is %d\n",ps,ps-s1);
	//strstr(s1,"cde");


	return 0;
}
void rdisplay(const char* ps)
{
	if(!*ps) return;
	//putchar(*ps);
	rdisplay(ps+1);
	putchar(*ps);
}
