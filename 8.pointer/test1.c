#include <stdio.h>

int main(){
    int x = 5;
    int *p = &x;
    printf("x = %d\n", *p);
    printf("address of x = %p\n", p);
}