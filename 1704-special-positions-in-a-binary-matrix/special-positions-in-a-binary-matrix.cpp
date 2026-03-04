class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int> oneC(m,0);
        vector<int> oneR(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    oneC[j]++;
                    oneR[i]++;
                }
            }
        }   
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    if(oneC[j]==1 && oneR[i]==1) res++;
                }
            }
        }
        return res;
    }
};