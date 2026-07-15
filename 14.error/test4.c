# include <stdio.h>

int main(){
    signed char x = 127;
    printf("x = %d\n", x + 1);// still can print, cuz promote to int now

    signed char y =  x + 1;
    printf("x = %d\n", y);// overflow


   x = 128;

    printf("x = %d\n", x + 1);
}