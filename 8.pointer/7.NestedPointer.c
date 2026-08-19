#include <stdio.h>
#include <stdlib.h>

int main() {
    // We want to represent: [[1,3], [2,6], [8,10]]

    int** intervals = malloc(3 * sizeof(int*));   // an array of 3 row-pointers

    intervals[0] = malloc(2 * sizeof(int));
    intervals[0][0] = 1;
    intervals[0][1] = 3;

    intervals[1] = malloc(2 * sizeof(int));
    intervals[1][0] = 2;
    intervals[1][1] = 6;

    intervals[2] = malloc(2 * sizeof(int));
    intervals[2][0] = 8;
    intervals[2][1] = 10;

    // Print it out
    for (int i = 0; i < 3; i++) {
        printf("[%d, %d]\n", intervals[i][0], intervals[i][1]);
    }

    return 0;
}