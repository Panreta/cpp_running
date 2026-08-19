int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int prefix = 1;
    * returnSize = numsSize;
    int* res = malloc(numsSize * sizeof(int));

    for(int i = 0;i < numsSize;i++){
        res[i] = prefix;
        prefix *= nums[i];
    }

    int surfix = 1;
    for(int i = numsSize - 1; i >=0; i --){
        res[i] *= surfix;
        surfix *= nums[i];
    }
    return res;
}