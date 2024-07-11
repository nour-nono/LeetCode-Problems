class Solution {
public:
    // Function to search for the start and end position of a given target in a sorted array
    vector<int> searchRange(vector<int>& nums, int target) {
        // Initialize the result vector with -1, -1 assuming target is not found
        vector<int> s = {-1, -1};
        // Find the lower bound of the target (first occurrence)
        int l = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        // Find the upper bound of the target (position after the last occurrence)
        int r = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        // If l != r, target is found. Adjust r to get the last occurrence's index
        if (l!=r) s = {l, r-1};
        // Return the start and end positions of the target
        return s;
    }
};
