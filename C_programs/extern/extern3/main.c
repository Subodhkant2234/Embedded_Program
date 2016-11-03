#include<stdio.h>
static int flag=0;
int main()
{
extern int flag;
printf("the value of flag is:%d\n",flag);
return 0;
}

