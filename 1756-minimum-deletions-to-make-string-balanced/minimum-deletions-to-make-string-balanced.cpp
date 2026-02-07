class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        int c=0;
        int res=0;
        for(int i=0;i<n;i++){
            if(s[i]=='b') c++;
            if(s[i]=='a' && c>0){
                c--;
                res++;
            }
        }   
        return res;
    }
};