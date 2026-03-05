class Solution {
public:
    int minOperations(string s) {
        
        int res=INT_MAX;
        for(int t=0;t<2;t++){
            int tar=(t==0)?0:1;
            int mn=0;
            for(int i=0;i<s.size();i++){
                if(s[i]-'0' !=tar) mn++;
                tar^=1;
            }
            res=min(mn,res);
        }
        return res;
        

    }
};