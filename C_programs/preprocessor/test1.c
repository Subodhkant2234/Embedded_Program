#include<stdio.h>
#define NAME "subodh"
#define A 1 
#define B 2
enum alpha { C=1, D=2};
int main()
{
#ifdef NAME
printf("name is :%s\n", NAME);
#else
printf("name of the file is :%s\n",__FILE__);
#endif
printf("Value A:%d B:%d C:%d D=%d\n", A, B, C, D);
}
