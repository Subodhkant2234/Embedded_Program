#include <stdio.h>
#include <stdlib.h>

void func(int);
void (*fp)(int);

int main()
{
      fp = func;
      (*fp)(10); // Calling funcptr explicitly with dereferencing
      return 0;
}

void func(int arg) {
      printf("%d\n", arg);
}

