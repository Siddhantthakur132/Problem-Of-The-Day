#include <iostream>
#include <vector>
using namespace std;

// Function to check if the array is "special"
bool isArraySpecial(vector<int>& nums) {
    int n = nums.size();

    // Edge case: Arrays with 0 or 1 element are trivially special
    if (n <= 1) return true;

    // Check if consecutive elements have the same parity
    for (size_t i = 0; i < n - 1; i++) {
        if (nums[i] % 2 == nums[i + 1] % 2) {
            return false; // Found two consecutive elements with the same parity
        }
    }
    return true; // All elements alternate in parity
}

int main() {
    // Test cases
    vector<int> nums1 = {1, 2, 3, 4, 5};    // Special
    vector<int> nums2 = {2, 4, 6, 8};       // Not special
    vector<int> nums3 = {7};               // Special (single element)
    vector<int> nums4 = {};                // Special (empty array)
    vector<int> nums5 = {1, 3, 5, 7};       // Not special

    cout << "Test Case 1: " << (isArraySpecial(nums1) ? "Special" : "Not Special") << endl;
    cout << "Test Case 2: " << (isArraySpecial(nums2) ? "Special" : "Not Special") << endl;
    cout << "Test Case 3: " << (isArraySpecial(nums3) ? "Special" : "Not Special") << endl;
    cout << "Test Case 4: " << (isArraySpecial(nums4) ? "Special" : "Not Special") << endl;
    cout << "Test Case 5: " << (isArraySpecial(nums5) ? "Special" : "Not Special") << endl;

    return 0;
}