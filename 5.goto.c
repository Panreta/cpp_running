#include <stdio.h>
 

int main() {
    int a = 10;

start:                          // this is a label
    if (a == 15) {
        a = a + 1;
        goto start;            // jump back to the label, skipping the printf below
    }

    printf("the value of a is: %d\n", a);
    a++;

    if (a < 20) {
        goto start;            // jump back to repeat, like the do-while condition
    }

    return 0;
}