#include<stdio.h>
#include <string.h>
int main()
{
	char a[30];
	char b[30];
	int len = 0, i = 0, j = 0;
	printf("Enter the string\n");
	scanf("%s" ,a);
	len = strlen(a);
	printf("The string enterd is :%s, len:%d\n",a, len);
	for (i = 0, j = 0; i < len; i++, j++) { 
		b[j] = a[i];
		switch(a[i]) {
			case '\\':
				b[++j]='\\';
				break;

			case '\'': 
				b[j] = '\\';
				b[++j] = '\'';
				break;
			case '\"':
				b[j] = '\\';
				b[++j] = '\"';
				break;

		}

	}
	printf("The string is:%s\n", b);

	return 0;
}
