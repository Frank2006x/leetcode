// Last updated: 1/26/2026, 8:37:40 AM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0, neg = 1, n = nums.size();
        vector<int> res(n, 0);
        for(int num : nums)
        {
            if(num > 0)
            {
                res[pos] = num;
                pos += 2;
            }
            else
            {
                res[neg] = num;
                neg += 2;
            }
        }
        return res;
    }
};