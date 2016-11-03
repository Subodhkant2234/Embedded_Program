/* Enter the two numbers a&b, a<b and then AND the number from a to b*/ 
#include<stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    int result = 0xffffffff;
    scanf("%d %d", &a, &b);
    result = result & b;
    while(a <= b) {
         result = result & a;
         a++;   
    }
     
    printf("Result is:%d\n", result);
    return 0;
}
