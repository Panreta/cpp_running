#include<stdio.h>

int a = 1;
short b = 2;
long c = 4;
double r = 3.4;
int main(){
    printf("here it is %d.\n",~a);
    printf("The size is %d\n",sizeof(a));
    printf("The size is %d\n",sizeof(b));
    printf("The size is %d\n",sizeof(c));
    printf("The size is %zu",sizeof(r));//size, unsigned integer
    return 0;
}