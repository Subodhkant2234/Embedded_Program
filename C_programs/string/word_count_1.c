#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int  word_count(char *data);
int main()
{
	char p[50] = " blue green red ";
//	printf("Enter the string\n");
//	gets(p); //abc def ghi
	printf("Enterd String :%s\n", p);
	word_count(p);
	return 0;
}

int  word_count(char *data)
{
	int count = 0;
//	while(isspace(*data))
//		data++;
//	if(*data == '\0')
//  		return;
#if 0
	while(isspace(*data)) {
			printf("*****%c******\n", *data);
			data++;
	}
#endif 
		
	while(*data != '\0') {
		while(isspace(*data))
			data++;
		if(*data == '\0')
  			return;
		printf("Isspace:%d\n", (!isspace(*data)));
		while(!isspace(*data) && *data != '\0')
		{
			putchar(*data);
			data++;
		}
			count ++;
			printf("\n");
	}
	printf("The word count:%d\n", count);
	return count;
}
