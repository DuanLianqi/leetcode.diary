#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int middle = 0;
        while (left <= right) {
            middle = (right - left) / 2 + left;
            if (nums[middle] == target) {
                return middle;
            } else if (nums[middle] > target) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> test = {-1, 0, 3, 5, 9, 12};
    int target1 = 9, target2 = 2;
    Solution s1;
    cout << s1.search(test, target1) << endl;
    cout << s1.search(test, target2) << endl;
    return 0;
}