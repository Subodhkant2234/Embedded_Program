#include<stdio.h>

int main()
{
	char s1[10];
	char s2[12]="abcd xyz"; 
	//min size=9,act size=12,len=8
	char s3[10]={'a','b','c','d','\0'};//min size=5
	char s4[]="abcd";//size=5,len=4

	printf("%d,%d,%d\n",sizeof(s2),sizeof(s3),sizeof(s4));
	printf("addr:s4=%u,s4=%u\n",s4,&s4[0]);
	printf("s4=%s\n",s4);

	char *ps="abcd";
	printf("ps=%s, addr=%u\n",ps,ps);
	printf("addr:s1:%u,s2:%u,s3:%u,s4:%u,ps:%u\n",
			s1,s2,s3,s4,ps);
	printf("direct addr:%u\n","abcdxyz");

	s3[0]++;
	s4[0]='y';
	//ps[0]++; //segmentation fault
	
	const char *ps2="Abcd Xyz 123";
	//ps2[0]++; --compile time error
	
	//s3="hello"; --error
	char *p1=ps;
	ps="xyz123"; //shallow copy,only addr changes
	//print ps,p1
	
	return 0;
}
	
