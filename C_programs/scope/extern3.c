#include<stdio.h>
extern int foo = 10;
int main(){
foo=11;
printf("the value of foo is:%d\n",foo);
return 0;
}
