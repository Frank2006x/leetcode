// Last updated: 1/26/2026, 8:38:49 AM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        for(int i=0;i<n;i++){
            res.push_back(nums[i]);
            res.push_back(nums[i+n]);

        }
        return res;
    }
};