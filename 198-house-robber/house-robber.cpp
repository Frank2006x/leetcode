class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        vector<int> robo(n,-1);
        robo[0]=nums[0];
        robo[1]=max(nums[1],nums[0]);

        for(int i=2;i<n;i++){
            robo[i]=max(robo[i-1],robo[i-2]+nums[i]);
        }
        return robo[n-1];
    }
};