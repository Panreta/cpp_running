#include <stdio.h>

int main() {
    signed char x = 127;
    printf("x + 1 = %d, size of (x+1) is %zu\n", x + 1, sizeof(x + 1));// x + 1 is promoted to int,
    // so the size is 4 bytes

    signed char y = x + 1;
    printf("y = %d\n", y);   // overflow, my result is -128

    x = 128;   // also a problem — see below
    printf("x + 1 = %d\n", x + 1);

    return 0;
}