// Last updated: 1/26/2026, 8:35:23 AM
class Solution {
public:
    int residuePrefixes(string s) {
        unordered_set<char> ch;
        int res=0;
        for(int i=0;i<s.size();i++){
            ch.insert(s[i]);
            int a=ch.size();
            int b=(i+1)%3;
            if(a==b) res++;
        }
        return res;
    }
};