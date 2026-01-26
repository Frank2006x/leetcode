// Last updated: 1/26/2026, 8:35:34 AM
class Solution {
public:
    long long sumAndMultiply(int n) {
        long long res=0;
        string num=to_string(n);
        int sum=0;
        for(char i:num){
            if(i!='0'){
                res=res*10+(i-'0');
                sum+=(i-'0');
            }
        }
        return res*sum;
    }
};