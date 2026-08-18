#include <stdio.h>

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    * returnSize = numsSize;
    for(int i = 0;i < numsSize; i ++){
        nums[i] = nums[i] * nums[i];
    }
    int l = 0, r = numsSize - 1, pos = numsSize - 1;
    int * res = malloc(numsSize * sizeof(int));
    while(l <= r){
        if(nums[l] > nums[r]){
            res[pos] = nums[l];
            l ++;
        }
        else{
            res[pos] = nums[r];
            r --;
        }
        pos --;

    }
    return res;

    
}