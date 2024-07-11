class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> s = {-1, -1};
        int l = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int r = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if (l!=r) s = {l, r-1};
        return s;
    }
};
