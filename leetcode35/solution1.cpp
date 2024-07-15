#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
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
};

int main()
{
    vector<int> test = {1, 3, 5, 6};
    int target1 = 2, target2 = 3, target3 = 7;
    Solution s;
    cout << "index1 = " << s.searchInsert(test, target1) << endl;
    cout << "index2 = " << s.searchInsert(test, target2) << endl;
    cout << "index3 = " << s.searchInsert(test, target3) << endl;

    return 0;
}