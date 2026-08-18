#include <stdio.h>
#include <stdlib.h>

void
f(void)
{
    int a[4];
    int *b = malloc(16);// give 16 bytes instead of 4 for an int
    int *c;
    int i;

    printf("1: a = %p, b = %p, c = %p\n", a, b, c);

    c = a;
    for (i = 0; i < 4; i++){a[i] = 100 + i;}

    c[0] = 200;
    printf("2: a[0] = %d, a[1] = %d, a[2] = %d, a[3] = %d\n",
	   a[0], a[1], a[2], a[3]);

    c[1] = 300;
    *(c + 2) = 301;// set c[2] = 301
    3[c] = 302;//c[3]
    printf("3: a[0] = %d, a[1] = %d, a[2] = %d, a[3] = %d\n",
	   a[0], a[1], a[2], a[3]);

    c = c + 1;
    *c = 400;// move the address of c in 1 more, c[1] = 400
    printf("4: a[0] = %d, a[1] = %d, a[2] = %d, a[3] = %d\n",
	   a[0], a[1], a[2], a[3]);

    c = (int *) ((char *) c + 1);// change to char, so one step is 1 byte now
    //eg: c is in 0x1000, and next int is in 0x1004, so (int *)(c + 1) starts at 0x1004
    // but now it's gonna start at 0x1002 since it's char
    *c = 499;
    // change 0x1002 - 0x1005 into 500
    printf("5: a[0] = %d, a[1] = %d, a[2] = %d, a[3] = %d\n",
	   a[0], a[1], a[2], a[3]);

    b = (int *) a + 1;
    c = (int *) ((char *) a + 1);
    printf("6: a = %p, b = %p, c = %p\n", a, b, c);
}

int
main(int ac, char **av)
{
    f();
    return 0;
}

/*
address:   0x1004  0x1005  0x1006  0x1007  0x1008  0x1009  0x100A  0x100B
element:   [------- a[1] -------]  [------- a[2] -------]
write:              [-------- *c = 499 (4 bytes) --------]
                     ↑ overwrites last 3 bytes of a[1]     ↑ overwrites first byte of a[2]
*/