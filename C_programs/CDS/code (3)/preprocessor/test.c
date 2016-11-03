
#include "test.h"
#include "test.h"
#define MAX 10
//this is a comment
int main()
{
	/* It is a multi line
	 * comment 
	 * 
	 * */
	int x;
	x=MAX;
	char str[]="abcd/*acomment*/xyz//123";
	printf("size=%d,len=%d\n",
		sizeof(str),strlen(str));
	char s1[]="hello"/*a comment*/"xyz";
	printf("%s,%d,%d\n",s1,sizeof(s1),strlen(s1));
	char s2[]="abcd"
"xyz";
	char s3[]="abcdefghijk\
lmnopqrs\
tuvwxyz";
	return 0;
}
int sum(int x,int y)
{
	return x+y;
}




