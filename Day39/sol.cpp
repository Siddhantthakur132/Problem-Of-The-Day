#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> productCount;
        int count = 0;
        int n = nums.size();
        
        // Count occurrences of each product pair (a * b)
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int product = nums[i] * nums[j];
                productCount[product]++;
            }
        }
        
        // For each product, calculate valid tuples
        for (auto& p : productCount) {
            int freq = p.second;
            if (freq > 1) {
                count += (freq * (freq - 1) / 2) * 8;  // Correct formula
            }
        }
        
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {2, 3, 4, 6};
    cout << "Output: " << sol.tupleSameProduct(nums1) << endl; // Expected: 8
    
    vector<int> nums2 = {1, 2, 4, 5, 10};
    cout << "Output: " << sol.tupleSameProduct(nums2) << endl; // Expected: 16
    
    return 0;
}
