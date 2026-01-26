// Last updated: 1/26/2026, 8:36:00 AM
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        if(nums.size()==1) return 0;
        sort(nums.begin(),nums.end());
        int start=0;
        
        int c=0;
        for(int end=0;end<nums.size();end++){
            while(nums[end]>(long long)nums[start]*k){
                start++;
            }
            c=max(c,end-start+1);
        }
        
        return nums.size()-c;        
    }
};