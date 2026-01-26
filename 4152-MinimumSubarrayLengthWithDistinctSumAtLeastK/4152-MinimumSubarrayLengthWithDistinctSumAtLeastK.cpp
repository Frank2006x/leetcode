// Last updated: 1/26/2026, 8:35:32 AM
class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int mlen = INT_MAX;
        int start = 0;
        int n = nums.size();
        int sum = 0;
        unordered_map<int, int> map;
        for (int end = 0; end < n; end++) {
            if (map.find(nums[end]) == map.end()) {
                sum += nums[end];
            }
            map[nums[end]]++;
            while(sum>=k ){
                mlen=min(mlen,end-start+1);
                map[nums[start]]--;
                if(map[nums[start]]==0){
                    sum-=nums[start];
                    map.erase(nums[start]);
                }
                start++;
            }

        }
        return mlen==INT_MAX?-1:mlen;
    }
};