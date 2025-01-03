class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int validsplit = 0; // Count of valid splits
        int n = nums.size();
        
        // Calculate the total sum of the array
        long long totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        
        long long leftSum = 0; // Running sum for the left part

        // Iterate through the array to calculate left and right sums
        for (int i = 0; i < n - 1; i++) {
            leftSum += nums[i]; // Update left sum
            long long rightSum = totalSum - leftSum; // Calculate right sum
            
            // Check if the left sum is greater than or equal to the right sum
            if (leftSum >= rightSum) {
                validsplit++;
            }
        }
        
        return validsplit;
    }
};
