// Last updated: 1/26/2026, 8:36:15 AM
class Solution {
public:
    bool isSort(vector<int> nums) {

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                return false;
            }
        }

        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int res = 0;
        while (!isSort(nums)) {
            int index = -1;
            int mSum = INT_MIN;
            for (int i = 0; i < nums.size() - 1; i++) {
                int sum = nums[i] + nums[i + 1];
                if (index == -1 || mSum > sum) {
                    mSum = sum;
                    index = i;
                }
            }
            nums.erase(nums.begin() + index);
            nums.erase(nums.begin() + index);
            nums.insert(nums.begin() + index, mSum);
            res++;

        }
        return res;
    }
};