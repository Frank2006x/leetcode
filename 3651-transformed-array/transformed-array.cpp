class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,INT_MIN);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                int index=(i+nums[i])%n;
                res[i]=nums[index];
            }else if(nums[i]<0){
                int roto=abs(nums[i]);
                roto%=n;
                int index=i;
                while(roto--){
                    index--;
                    if(index==-1){
                        index=n-1;
                    }
                }
                res[i]=nums[index];
            }else {
                res[i]=nums[i];
            }
        }
        return res;
    }
};