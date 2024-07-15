#include <stdio.h>
#include <stdlib.h>

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    int middle = 0;
    while (left <= right) {
        middle = (right - left) / 2 + left;
        if (nums[middle] < target) {
            left = middle + 1;
        } else if (nums[middle] > target) {
            right = middle - 1;
        } else {
            return middle;
        }
    } 
    return right + 1;
}

int main()
{
    int test[4] = {1, 3, 5, 6};
    int target1 = 2, target2 = 3, target3 = 7;
    printf("index1 = %d\n", searchInsert(test, 4, target1));
    printf("index2 = %d\n", searchInsert(test, 4, target2));
    printf("index3 = %d\n", searchInsert(test, 4, target3));

    return 0;
}