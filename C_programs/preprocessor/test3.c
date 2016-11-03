/* checking for more than one macro existence */
#include<stdio.h>
#define A
#define B
#define C
int main()
{
#if defined(A) && defined(B) && !defined (C)
printf("only A and B is defined \n");
#else 
printf("all A,B and C is defined \n");
#endif
}
/* #if defined(macro_name) is equivalent to #ifdef macro_name 
but the #ifdef macro_name  is only for checking one macro existence
but with #if defined(macro_name) we can check more than one macro
existence using logical operators */

