#include <stdio.h>
 
#define tokenpaster(n) printf ("token" #n " = %d", token##n)
 /*
 #n     →  stringify   — turns n into a string "n"
##n    →  concatenate — glues tokens together
 */
int main(void)
{
   int token34 = 40;
   
   tokenpaster(34);
   return 0;
}