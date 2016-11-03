#include<stdio.h>
void my_func( int *);
int main()
{
int arr[3]={1,5,10};
my_func(arr+1);
printf("The value of array is %d:%d:%d\n",arr[0],arr[1],arr[2]);
return 0;
}

void my_func(int *p)
{
*p=*p+2;
printf("The value of first arg is :%d\n",*p);
//printf("The value of array is %d:%d:%d\n",*p,*(p+1),*(p+2));
}

