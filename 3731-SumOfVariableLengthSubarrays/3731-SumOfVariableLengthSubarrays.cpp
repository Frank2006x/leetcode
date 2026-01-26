// Last updated: 1/26/2026, 8:36:18 AM
class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int start=0;
        int sum=0;
        vector<int> prefix(nums.size()+1,0);
        prefix[0]=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            prefix[i+1]=sum;
        }
       

        sum=0;
        for(int end=1;end<=nums.size();end++){
            if(start==0){
                sum+=prefix[end];
            }else{
                sum+=prefix[end]-prefix[start];
            }
            if(end==nums.size()) break;
            start=max(0,end-nums[end]);
           
        }
        return sum;
    }
};