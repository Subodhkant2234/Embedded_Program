#include<stdio.h>

#define CONCAT(a,b) a##b
#define display(str) puts(#str)
#define len(str) strlen(#str)

int main()
{
	printf("file name:%s\n",__FILE__);
	/*a comment*/
	printf("line no.:%d\n",__LINE__);
	#line 1200
	printf("line no.:%d\n",__LINE__);
	printf("%s,%s,mod time:%s\n",
		__DATE__,__TIME__,__TIMESTAMP__);
	CONCAT(te,st) (10,20);
	//print##f("Thank you");
	CONCAT(f,1)();
	CONCAT(f,2)();

	display(abcdxyz);
	int n=len(abcd);
	printf("n=%d\n",n);

	return 0;
}
void f1() {  }
void f2() {  }
void test(int x,int y)
{
	int z=x+y;
	printf("addr=%x\n",__FUNCTION__);
}



