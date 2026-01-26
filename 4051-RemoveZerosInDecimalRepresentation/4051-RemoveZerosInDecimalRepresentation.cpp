// Last updated: 1/26/2026, 8:35:42 AM
class Solution {
public:
    long long removeZeros(long long n) {
        long long res=0;
        string sn=to_string(n);
        for(char i:sn){
            if(i!='0'){
                res=res*10+(i-'0');
            }
        }
        return res;
        
    }
};