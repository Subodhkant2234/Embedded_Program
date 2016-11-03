#include<stdio.h>
int main()
{
int a=5,b=10;
typedef int *p[2];
p arrayp={&a,&b};
printf("the value of array pointer is :%d..%d\n",*(arrayp[0]),*(arrayp[1]));
return 0;
}


