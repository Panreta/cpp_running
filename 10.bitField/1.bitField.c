/*
struct
{
  unsigned int widthValidated:0 or 1;
  unsigned int heightValidated: 0 or 1;
} status;
*/

/* Define a bit-field structure,Determine the specific bit you want to allocate to each variable. */


#include <stdio.h>
#include <string.h>
 
/* Define a simple structure.*/
struct
{
  unsigned int widthValidated;
  unsigned int heightValidated;
} status1;
 
struct
{
  unsigned int longValidated : 1;
  unsigned int heightValidated : 1;
  unsigned int widthValidated : 30;//change to 31 the size will instantly change to 8 bytes
} status2;

 
int main( )
{
   printf( "Memory size occupied by status1 : %zu\n", sizeof(status1));// count by bite, so it's 4 bite.
   printf( "Memory size occupied by status2 : %zu\n", sizeof(status2));
 
   return 0;
}


//But the CPU can't allocate 2 bits alone — minimum allocation unit is 4 bytes (32 bits). So it 
// gives you one 32-bit int and packs both bits inside it: