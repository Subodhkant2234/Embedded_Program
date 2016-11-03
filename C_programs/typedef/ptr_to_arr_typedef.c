#include<stdio.h>
int main()
{
int a,b;
int array[3]={10,20,30};
typedef int (*p)[3];
p pointa = &array;
printf("the value is :%d..%d\n",*(*pointa+0),*(*pointa+1));
return 0;
}
