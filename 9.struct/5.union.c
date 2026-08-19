/*
union [union tag]
{
   member definition;
   member definition;
   ...
   member definition;
} [one or more union variables];

struct  →  each member has its OWN memory
union   →  ALL members SHARE the same memory
*/

# include <stdio.h>
# include <string.h>

union Data
{
   int i;
   float f;
   char  str[20];
} data;

int main( )
{
   printf( "Memory size occupied by data : %zu\n", sizeof(data));// 20 bytes

    // we will see the i,f will be overwritten by str

    
   data.i = 10;
   data.f = 220.5;
   strcpy( data.str, "C Programming");
 
   printf( "data.i : %d\n", data.i);
   printf( "data.f : %f\n", data.f);
   printf( "data.str : %s\n", data.str);
   return 0;
}