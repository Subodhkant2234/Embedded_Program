#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="jan:feb:mar:apr";
	printf("first token is: %s\n",strtok(str,":"));
	/*printf("%s\n",strtok(NULL,":"));
	printf("%s\n",strtok(NULL,":"));
	printf("%s\n",strtok(NULL,":"));
	printf("%p\n",strtok(NULL,":")); */

	char *ps;
	while( (ps=strtok(NULL,":"))!=NULL)
		printf("%s\n",ps);
	return 0;
}

