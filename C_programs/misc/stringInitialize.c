#include<stdio.h>
#include<string.h>
int main()
{
//	char a[10] = "";
//	char a[20] = "\0";
//	char a[20] = {0};
	char a[50] = {'\0'};
	int i = 0;
	for(i = 0; i < 50; i++) {
		printf("%dth element:%d\n", i, a[i]);
	}
	return 0;
}
