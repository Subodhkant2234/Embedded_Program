#include<stdio.h>
#include <string.h>
int main()
{
	char a[20];
 	scanf("%[^\n]s", a);
	printf("Entered String:%s\n", a);
	return 0;
}
