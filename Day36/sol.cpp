#include <iostream>
#include <vector>
#include <algorithm> // for max function

using namespace std;

int maxAscendingSum(vector<int>& nums) {
    int max_sum = nums[0]; // Initialize with the first element
    int current_sum = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] > nums[i - 1]) {
            // Continue the ascending subarray
            current_sum += nums[i];
        } else {
            // Start a new ascending subarray
            current_sum = nums[i];
        }
        // Update the maximum sum
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int main() {
    vector<int> nums1 = {10, 20, 30, 5, 10, 50};
    vector<int> nums2 = {10, 20, 30, 40, 50};
    vector<int> nums3 = {12, 17, 15, 13, 10, 11, 12};

    cout << "Output for nums1: " << maxAscendingSum(nums1) << endl; // 65
    cout << "Output for nums2: " << maxAscendingSum(nums2) << endl; // 150
    cout << "Output for nums3: " << maxAscendingSum(nums3) << endl; // 33

    return 0;
}