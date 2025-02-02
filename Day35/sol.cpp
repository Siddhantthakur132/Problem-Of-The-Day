
#include <iostream>
#include <vector>

class Solution {
public:
    bool check(std::vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) {
                count++;
            }
        }
        if (nums[n - 1] > nums[0]) {
            count++;
        }
        if (count <= 1) return true;
        return false;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {3, 4, 5, 1, 2};
    bool result = solution.check(nums);
    std::cout << "Is the array sorted in a circular manner? " << (result ? "Yes" : "No") << std::endl;
    return 0;
}

