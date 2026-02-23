class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int t=pow(2,k);
        unordered_set<string> set;
        int n=s.size();
        for(int i=0;i<=n-k;i++){
            set.insert(s.substr(i,k));
        }
        
        if(set.size()==t){
            return true;
        }
        return false;
    }
};