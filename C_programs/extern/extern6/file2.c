#include<stdio.h>
static void put() //This is the private function of this file it will cause the error when we try to access from main().
{
printf("In a file:%s\n",__FILE__);
}
