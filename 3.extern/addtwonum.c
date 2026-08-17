#include <stdio.h>
/*外部变量声明*/
extern int x ;// also be used outside of the file,
extern int y ;
int addtwonum()
{
    return x+y;
}