#include <stdio.h>
#include <stdlib.h>

void func(int);

typedef void (*fp)(int);

int main()
{
      fp func_ptr = func;
      (*func_ptr)(10); // Calling funcptr explicitly with dereferencing
      func_ptr(20);   // Calling funcptr without derefrencing
      return 0;
}

void func(int arg) {
      printf("%d\n", arg);
}

/* Once you've got the pointer, you can assign the address of the right sort of function just by using its name: like an array, a function
 name is turned into an address when it's used in an expression. You can call the function using one of two forms:

(*func)(1);
 or 
func(1); */
