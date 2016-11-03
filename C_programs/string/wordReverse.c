#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void word_reverse(char *data);
void reverse(char *data, int);
int main()
{
	char *p, *q;
	int len;
	p = (char *)malloc(sizeof(int) * 20);
	printf("Enter the string\n");
	gets(p);
	printf("Enterd String:%s\n", p);
	len = strlen(p);
	reverse(p, len);
	printf("The reversed string :%s\n", p);
	word_reverse(p);
	printf("The reversed word:%s\n", p);
	return 0;
}

void reverse(char *data, int length)
{
	int start = 0, len;
	char temp;
	len = length;
	while(start < len)
		{
			temp = data[start];
			data[start] = data[len - 1];
			data[len -1] = temp;
			start++;
			len--;
		}
}
void  word_reverse(char *data)
{
	char *w_start, *w_end;
	int len;
	char * word;
	while(isspace(*data))
		data++;
	while(*data) {
		w_start = data;
		while(((*data) != ' ' ) && (*data != '\0'))
			data++;
		w_end = data;
		len = w_end - w_start;
	//	printf("W_start:%s\n", w_start);
		reverse(w_start, len);
		data++;
	}
}
