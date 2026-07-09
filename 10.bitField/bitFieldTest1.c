#include <stdio.h>
#include <string.h>
 
struct
{
  unsigned int age : 3;//allocate 3 bits, but count as 4 bytes.
} Age;
 
int main( )
{
   Age.age = 4;
   printf( "Sizeof( Age ) : %lu\n", sizeof(Age) );
   printf( "Age.age : %d\n", Age.age );
 
   Age.age = 7;
   printf( "Age.age : %d\n", Age.age );
 
   Age.age = 8; // 二进制表示为 1000 有四位，超出
   printf( "Age.age : %d\n", Age.age );
 
   return 0;
}
