#include <stdio.h>
 
#define  message_for(a, b)  \ // change line
    printf(#a " and " #b ": We love you!\n")// # var def
 
int main(void)
{
   message_for(Carole, Debra);
   return 0;
}