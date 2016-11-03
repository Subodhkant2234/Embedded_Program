#include<stdio.h>
void fun();
#pragma startup fun
void fun()
{
printf("In Fun\n");
}
main()
{
printf("In Main\n");
}
