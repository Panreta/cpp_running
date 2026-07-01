// pass by reference
#include <stdio.h>
void addOne(int *x){//x is an address
    *x = *x + 1;
}

int main(){
    int a = 5;
    addOne(&a);// the value will actually change
    printf("%d",a);
}