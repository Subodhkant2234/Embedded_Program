#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 //Integer size in bits
 
int main()
{
    int num, order=0, i;
 
    //Reads a number from user
    printf("Enter any number: ");
    scanf("%d", &num);
 
    //Loops over each bit of the integer
    for(i=0; i<INT_SIZE; i++)
    {
        //If the current bit is set
        if((num>>i) & 1)
            order = i;
    }
 
    printf("Highest order set bit in %d is %d", num, order);
 
    return 0;
}
