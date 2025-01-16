#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xor1 = 0, xor2 = 0;
        
        // Compute XOR of nums1 and nums2
        for (int num : nums1) {
            xor1 ^= num;
        }
        for (int num : nums2) {
            xor2 ^= num;
        }
        
        // Compute the final result based on the formula
        int result = 0;
        if (nums2.size() % 2 != 0) {
            result ^= xor1;
        }
        if (nums1.size() % 2 != 0) {
            result ^= xor2;
        }
        
        return result;
    }
};

int main() {
    Solution solution;

    // Test case 1
    vector<int> nums1_1 = {2, 1, 3};
    vector<int> nums2_1 = {10, 2, 5, 0};
    cout << "Test Case 1 Output: " << solution.xorAllNums(nums1_1, nums2_1) << endl;

    // Test case 2
    vector<int> nums1_2 = {1, 2};
    vector<int> nums2_2 = {3, 4};
    cout << "Test Case 2 Output: " << solution.xorAllNums(nums1_2, nums2_2) << endl;

    // Test case 3 (edge case)
    vector<int> nums1_3 = {0};
    vector<int> nums2_3 = {0};
    cout << "Test Case 3 Output: " << solution.xorAllNums(nums1_3, nums2_3) << endl;

    return 0;
}
