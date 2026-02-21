class Solution {
public:

    bool isP(int n){
        if(n==1) return false;
        if(n<=3) return true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int res=0;
        for(int i=left;i<=right;i++){
            int n=0;
            int c=i;
            while(c>0){
                if(c & 1){
                    n++;
                }
                c>>=1;
            }
            if(isP(n)){
                res++;
            }
        }
        return res;
    }
};