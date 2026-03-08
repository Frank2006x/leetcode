class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return -1;
        vector<long long> preSum;
        long long sum=0;
        preSum.push_back(sum);
        for(auto i:nums){
            sum+=i;
            preSum.push_back(sum);
        }
        vector<long long> pro;
        long long p=1;
        pro.push_back(p);
        for(int i=n-1;i>=0;i--){
            if(p > LLONG_MAX / nums[i]){
                break;
            }
            p*=nums[i];
            pro.push_back(p);
        }
        while(pro.size()<n){
            pro.push_back(p);
        }
        
        for(int i=n-1;i>=0;i--){
            if(preSum[i]==pro[n-i-1]){
                return i;
            }
        }
        return -1;
    }
};