#include<stdio.h>
#include<string.h>
void reverse(char *,int );
int main(int argc, char *argv[])
{
	char name[50];
	int a;
//	a =  strlen(argv[1]);
//	reverse(argv[1], a-1);
//	gets(name);
	printf("Enter the String name\n");
	scanf("%[^\n]s", name);
	a = strlen(name);
	reverse(name, a-1);

	return 0;
}
void reverse(char *data, int len)
{
	int start = 0;
	printf("Data:%s len:%d\n", data, len);
	char *tmp = data;
	while(len > start) {
		data[start] = data[start] ^ data[len];	
		data[len] = data[start] ^ data[len];	
		data[start] = data[start] ^ data[len];	
		start++;
		len--;
	}
	printf("Reversed String:%s\n", tmp);
}
