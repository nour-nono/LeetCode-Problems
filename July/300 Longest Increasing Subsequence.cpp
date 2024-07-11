class Solution {
private:
public:
    // Helper function to compute the length of LIS using dynamic programming
    int dpOfLIS(vector<int>& nums, int idx, int last, vector<vector<int>> &dp) {
        // Base case: if we've looked at all elements
        if(idx == nums.size())
            return 0;
        // If we've already computed this state, return its value
        if (dp[last + 10001][idx] != -1)
            return dp[last + 10001][idx];
        
        int op1 = 0, op2 = 0;
        // If the current number is greater than the last number in the sequence, consider it
        if (last < nums[idx])
            op1 = dpOfLIS(nums, idx + 1, nums[idx], dp) + 1;
        // Option 2: Skip the current number
        op2 = dpOfLIS(nums, idx + 1, last, dp);
        // Store the result in dp table and return the maximum of the two options
        return dp[last + 10001][idx] = max(op1, op2);
    }
    
    // Main function to find the length of the longest increasing subsequence
    int lengthOfLIS(vector<int>& nums) {
        // Initialize dp array with -1, indicating uncomputed states
        vector<vector<int>> dp(20004, vector<int>(2501, -1));
        // Start the dp process with the first element, considering -10001 as the smallest possible value
        return dpOfLIS(nums, 0, -10001, dp);
    }
};
