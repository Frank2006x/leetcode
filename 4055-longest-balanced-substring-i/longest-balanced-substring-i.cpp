class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        int res=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int> map;
            for(int j=i;j<n;j++){
                map[s[j]]++;
                auto it=map.begin()->second;
                bool ok=true;
                for(auto k:map){
                    if(k.second!=it) {
                        ok=false;
                        break;
                    }
                }
                if(ok){
                    res=max(j-i+1,res);
                }
            }
        }
        return res;
    }
};