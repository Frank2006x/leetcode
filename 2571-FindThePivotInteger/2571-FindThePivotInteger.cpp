// Last updated: 1/26/2026, 8:37:19 AM
class Solution {
public:
    int pivotInteger(int n) {
        if(n<=1){
            return n;
        }
        vector<int> res(n);
        iota(res.begin(),res.end(),1);
        for(int i=1;i<n;i++){
            res[i]=res[i]+res[i-1];
        }

        for(int i=1;i<n;i++){
            if(res[i]==(res[n-1]-res[i-1])){
                return i+1;
            }
        }
        

        return -1;
    }
};