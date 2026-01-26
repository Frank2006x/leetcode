// Last updated: 1/26/2026, 8:38:27 AM
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>res(n,0);
        if(k>0){
            int sum=0;
            for(int i=1;i<=k;i++){
                sum+=code[i%n];
            }
            res[0]=sum;
            for(int i=1;i<n;i++){
                sum=sum+code[(k+i)%n]-code[i%n];
                res[i]=sum;
            }
        }else if(k==0){
            return res;
        }else{
            int sum=0;
            k=abs(k);
            int i=n-1;
            int kc=k;
            while(kc--){
                sum+=code[i%n];
                i--;
            }
            res[0]=sum;
            for(int i=1;i<n;i++){
                sum=sum+code[(i-1)%n]-code[((n-k+i-1))%n];
                res[i]=sum;
            }
        }
        return res;
    }
};