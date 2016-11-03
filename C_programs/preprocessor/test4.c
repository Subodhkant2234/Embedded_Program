#include <stdio.h>

#define   message_for(a, b)  \
          printf(#a  #b)

int main(void)
{
   message_for(Carole, Debra);
   return 0;
}
