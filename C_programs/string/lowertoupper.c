#include<stdio.h>
#include<string.h>

int main()
{
	char name[20];
	char updated[20];
	int i = 0, j = 0, len = 0;
	printf("Enter the data\n");
	gets(name);
	printf("Enterd data:%s\n",name);
	len=strlen(name);
	printf("String len:%d\n", len);
	for(i = 0, j = 0; i < len && j <= i; i++, j++) {
//		printf("In for loop\n");
		if(isblank(name[i]) || isspace(name[i]))	
			updated[j] = name[i];
		else if(islower(name[i])) 
			updated[j] = name[i] - 32;
		else 
			updated[j] = name[i];
	}
	updated[j]='\0';
	printf("Upper String is :%s\n", updated);
	return 0;
}
