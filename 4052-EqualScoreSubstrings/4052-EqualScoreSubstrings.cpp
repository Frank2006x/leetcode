// Last updated: 1/26/2026, 8:35:41 AM
class Solution {
public:
    bool scoreBalance(string s) {
        vector<int> preSum;
        int sum=0;
        for(int i=0;i<s.size();i++){
            sum+=s[i]-'a'+1;
            preSum.push_back(sum);
        }
        int n=preSum.size()-1;
        for(int i=0;i<n;i++){
            if(preSum[i]==preSum[n]-preSum[i]) return true;
        }
        return false;
    }
};