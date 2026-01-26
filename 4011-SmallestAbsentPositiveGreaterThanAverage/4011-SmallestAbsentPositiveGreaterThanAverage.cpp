// Last updated: 1/26/2026, 8:35:46 AM
class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        double avg=0;
        vector<bool>used(202,0);
        for(int i:nums){
            avg+=i;
            used[i+101]=true;
        }
        avg/=nums.size();
        if(avg<0) avg=0;
        int n=(int)avg+1;
        while(n<=102){
            if(used[n+101]==false){
                return n;
            }
            n++;
        }
        return 0;
    }
};