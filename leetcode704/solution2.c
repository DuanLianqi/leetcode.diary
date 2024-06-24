#include <stdio.h>
#include <stdlib.h>

int search(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1, middle = 0;
    while (left <= right) {
        middle = (right - left) / 2 + left;
        if (nums[middle] == target) {
            return middle;
        } else if (nums[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}

int main() {
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int target1 = 9, target2 = 2;
    printf("%d\n", search(nums, 6, target1));
    printf("%d\n", search(nums, 6, target2));
    return 0;
}