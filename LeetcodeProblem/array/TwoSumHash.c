#include <stdlib.h>

#define TABLE_SIZE 20011   // a prime number, bigger than max array size

typedef struct Node {
    int key;          // the number we're looking for (target - num)
    int value;        // the index i where we saw it
    struct Node* next; // for collision handling (chaining)
} Node;

t

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    Node* table[TABLE_SIZE] = {NULL};   // the "mapping" — array of linked lists

    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];

        // ---- if num in mapping: ----if has, not null, else null
        int idx = hashFunc(num);
        Node* curr = table[idx];
        while (curr != NULL) {
            if (curr->key == num) {
                // ---- return [mapping[num], i] ----
                int* result = malloc(2 * sizeof(int));
                result[0] = curr->value;
                result[1] = i;
                *returnSize = 2;
                return result;
            }
            curr = curr->next;
        }

        // ---- mapping[target - num] = i ----
        int newKey = target - num;
        int newIdx = hashFunc(newKey);
        Node* newNode = malloc(sizeof(Node));
        newNode->key = newKey;
        newNode->value = i;
        newNode->next = table[newIdx];
        table[newIdx] = newNode;
    }

    *returnSize = 0;
    return NULL;
}