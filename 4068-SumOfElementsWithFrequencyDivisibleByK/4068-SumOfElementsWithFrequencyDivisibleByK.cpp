// Last updated: 1/26/2026, 8:35:40 AM
class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int i:nums){
            map[i]++;
        }
        int s=0;
        for(auto i:map){
            if(i.second%k==0){
                s+=i.first*i.second;
            }
        }
        return s;
    }
};