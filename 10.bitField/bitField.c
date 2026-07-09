/*
struct
{
  unsigned int widthValidated:0 or 1;
  unsigned int heightValidated: 0 or 1;
} status;
*/

#include <stdio.h>
#include <string.h>
 
/* 定义简单的结构 */
struct
{
  unsigned int widthValidated;
  unsigned int heightValidated;
} status1;
 
/* 定义位域结构 */
struct
{
  unsigned int longValidated : 1;
  unsigned int heightValidated : 1;
  unsigned int widthValidated : 30;//change to 31 the size will instantly change
  


} status2;

 
int main( )
{
   printf( "Memory size occupied by status1 : %lu\n", sizeof(status1));
   printf( "Memory size occupied by status2 : %lu\n", sizeof(status2));
 
   return 0;
}


//But the CPU can't allocate 2 bits alone — minimum allocation unit is 4 bytes (32 bits). So it gives you one 32-bit int and packs both bits inside it: