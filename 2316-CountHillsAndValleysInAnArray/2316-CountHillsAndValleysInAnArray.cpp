// Last updated: 1/26/2026, 8:37:36 AM
class Solution {
public:
    int countHillValley(vector<int>& num) {
        vector<int>nums;
        int prev=num[0];
        nums.push_back(prev);
        for(int n:num){
            if(n!=prev){
                nums.push_back(n);
            }
            prev=n;
        }
        int c=0;
        for(int i=1;i<nums.size()-1;i++){
            if((nums[i-1]<nums[i] && nums[i]>nums[i+1]) || (nums[i-1]>nums[i] && nums[i]<nums[i+1])){
                c++;
            }
        }
        return c;
    }
};