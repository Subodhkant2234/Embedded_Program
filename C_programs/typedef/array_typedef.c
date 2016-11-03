#include <stdio.h>
#define DEBUG
#include "test.h"
int main()
{
typedef int array[5];
//array p1={1,2,3,4,5}; 1D array pf 5 integer
array p1[4]={1,2,3,4}; //2D array
printf("this is the test this pgm\n");
printf("..%d\n",p1[0][3]);
printf("size of p1 is :%ld\n",sizeof(p1));
DLOG(3);
}
