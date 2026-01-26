// Last updated: 1/26/2026, 8:36:06 AM
class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0;
        int p=1;
        int num=n;
        while(num>0){
            int k=num%10;
            s+=k;
            p*=k;
            num/=10;
        }
        if(n%(s+p)==0) return true;
        return false;
        
    }
};