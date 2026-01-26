// Last updated: 1/26/2026, 8:35:39 AM
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i]=abs(nums[i]);
            }
        }
        sort(nums.begin(),nums.end());
        long long res=0;
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            res+=pow(nums[right],2);
            if(left==right) break;
            res-=pow(nums[left],2);
            left++;
            right--;
        }
        return res;
    }
};