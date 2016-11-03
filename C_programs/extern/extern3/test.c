#include<stdio.h>
int main()
{
extern int x;
printf("the value of x:%d\n",x);
return 0;
}
int x=3;
