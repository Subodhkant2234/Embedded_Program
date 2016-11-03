#include <stdio.h>              // Include general I/O library
#include "common.h"             // Include defined variables and functions
void func3(void);               // Define Local function
void func4(void);               // Define Local function
int main(void)                  // Main Program
{
    printf("i = %d \n", i);     // Print out initial value of i
    printf("n = %d \n", n);     // Print out initial value of n
    i = 8;                      // Set a new value for i
    printf("i = %d \n", i);     // Print out the new value of i
    n = 4;                      // Set a new value for n
    printf("n = %d \n", n);     // Print out the new value of n
    func1();                    // Call global function = function 1 
    func2();                    // Call global function = function 2
    for(i=0; i<6; i++)          // Print out global Array
        printf("%d", Array[i]);
    // Print out blank lines
    printf("\n");
    printf("\n");
    func3();                   // Call local function = function 3
    // Print out blank lines
    printf("\n");
    printf("\n");
    func4();                   // Call local function = function 4
    return 0;                  // End main program
 }
// Definition of local function 3
void func3(void)
{
     printf("This is ... Function 3 \n");
     printf("Please, Enter a new value for variable i = ");
     scanf("%d", &i);
     printf("The new value for variable i = %d \n", i);
}
// Definition of local function 4
void func4(void)
{
     printf("This is ... Function 4 \n");
     for(i=0; i<6; i++)
     {
          printf("Please, Enter a new value for variable Array[%d] = ", i);
          scanf("%d", &Array[i]);
     }
     for(i=0; i<6; i++)
        printf("a new value for variable Array[%d] = %d \n", i, Array[i]);
}
