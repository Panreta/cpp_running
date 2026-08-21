#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0; i < numsSize - 1; i ++){
        for(int j = i + 1;j < numsSize;j ++){
            if (nums[i] + nums[j] == target){
                int * res = malloc(2 * sizeof(int));// tell the compiler to allocate memory for 2 int
                res[0] = i;
                res[1] = j;
                *returnSize = 2;//tell the compiler the size of the return array
                return res;
            }

        }
    }
    // if no result
    *returnSize = 0;
    return NULL;
}

int main(){
    int nums[] = {2,7,11,15};
    int target = 9;
    int returnSize;
    int * res = twoSum(nums, 4, target, &returnSize);
    if (res != NULL){
        printf("%d, %d\n", res[0], res[1]);
        free(res); // Free the allocated memory
    } else {
        printf("No two sum solution found.\n");
    }
    return 0;
}
