#include<stdio.h>

enum color { red=11,green,blue,white=21,black };
int main()
{
	enum color c1;
	c1=green;
	int code;
	code=green;
	int x=13;
	c1=x;
	switch (c1)
	{
		case red: printf("blood colour\n");
			  break;
		case green:printf("leaves are green\n");
			   break;
		case blue:printf("sky is blue\n");
			  break;
		default :
			printf("It is in default case\n");
	}
	printf("code=%d\n",code);
	return 0;
}
