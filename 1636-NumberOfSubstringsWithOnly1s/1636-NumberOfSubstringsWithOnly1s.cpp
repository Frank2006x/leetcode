// Last updated: 1/26/2026, 8:38:38 AM
class Solution {
public:
    int numSub(string s) {
        long long res=0;
        long long c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                
                res=((res+(c*(c+1))/2)%1000000007)%1000000007;
                c=0;
            }else{
                c++;
            }
        }
        if(c>0)  res=((res+(c*(c+1))/2)%1000000007)%1000000007;
        return res;
    }
};