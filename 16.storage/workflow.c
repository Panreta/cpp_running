#include <stdio.h>
#include <stdlib.h>

int main() {
    char* inputs[] = {"10", "25", "7", "999", "abc"};  // simulated text input
    int numInputs = 5;

    int capacity = 2;                                   // start small
    int* numbers = calloc(capacity, sizeof(int));        // zero-initialized heap array
    int count = 0;                                       // how many numbers stored so far

    if (numbers == NULL) {
        printf("Initial allocation failed.\n");
        exit(1);   // can't continue without memory — terminate immediately
    }

    for (int i = 0; i < numInputs; i++) {
        // ---- grow the array if it's full ----
        if (count == capacity) {
            capacity *= 2;   // double the capacity
            int* temp = realloc(numbers, capacity * sizeof(int));

            if (temp == NULL) {
                printf("Reallocation failed — out of memory.\n");
                free(numbers);   // release what we had before quitting
                exit(1);
            }
            numbers = temp;   // realloc succeeded — safe to reassign
            printf("Grew capacity to %d\n", capacity);
        }

        // ---- convert text to int ----
        int value = atoi(inputs[i]);

        // atoi returns 0 both for "0" and for invalid text like "abc" —
        // here we treat a non-"0" input that converts to 0 as invalid
        if (value == 0 && inputs[i][0] != '0') {
            printf("Invalid number: \"%s\" — skipping.\n", inputs[i]);
            continue;
        }

        numbers[count] = value;
        count++;
    }

    // ---- print final results ----
    printf("\nStored %d valid numbers: ", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // ---- clean up ----
    free(numbers);
    numbers = NULL;

    return 0;
}