#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int i = 0, flag = 0;
	char temp[10] = " ";
	printf("The argv[1]:%s\n", argv[1]);
	char buff[10];
	strncpy(buff, argv[1], 8);
	for(i = 0; i < 7; i++) {
		if(buff[i] == '1') {
			flag = 1;
			continue;
		}
		else {
			if(flag == 1)
			sprintf(temp, "%s%d,", temp, i-1);
		}			
		flag = 0;
	}
	printf("The Position:%s\n", temp);
	return 0;
}
