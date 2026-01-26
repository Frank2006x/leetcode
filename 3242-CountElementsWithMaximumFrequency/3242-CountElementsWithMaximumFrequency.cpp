// Last updated: 1/26/2026, 8:36:46 AM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101,0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int c=0;
        int mE=*max_element(freq.begin(),freq.end());
        for(int i:freq){
            if(i==mE){
                c++;
            }
        }
        return c*mE;
    }
};