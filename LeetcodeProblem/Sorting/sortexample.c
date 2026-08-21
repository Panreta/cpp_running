#include <stdio.h>
#include <stdlib.h>

// comparison function — qsort calls this to decide ordering
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);// (int*): cast to int pointer; *(int*): dereference to compute val
}

int main() {
    int nums[] = {23, 4, 5, 67, 43, 28};
	printf("Here the nums is %zu, and nums[0] is %zu.\n",sizeof(nums),sizeof(nums[0]));
    int n = sizeof(nums) / sizeof(nums[0]);   // = 6

    qsort(nums, n, sizeof(int), compare);      // sorts nums IN PLACE — no return value used

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
