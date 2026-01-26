// Last updated: 1/26/2026, 8:38:20 AM
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> set;
        int start=0;
        int sum=0;
        int maxSum=0;
        for(int end=0;end<nums.size();end++){
            while(set.find(nums[end])!=set.end()){
                set.erase(nums[start]);
                sum-=nums[start];
                start++;
            }
            set.insert(nums[end]);
            sum+=nums[end];
            maxSum=max(maxSum,sum);
        }
        return maxSum;
    }
};