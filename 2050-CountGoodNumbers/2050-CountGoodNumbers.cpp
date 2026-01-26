// Last updated: 1/26/2026, 8:37:57 AM
class Solution {
public:
    long long power(long long x,long long n){
        long long res=1;
        while(n>0){
            if(n%2==1){
                res=(res*x)%1000000007;
            }
            x=(x*x)%1000000007;
            n/=2;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long ec=(n+1)/2;
        long long oc=n/2;
        long long res=(power(5, ec) * power(4, oc)) % 1000000007;
        return (int) res;
    }
};