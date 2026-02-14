class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> glass(100,vector<double>(100,0));
        glass[0][0]=poured;

        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                if(i==0 && j==0) continue;
                if(i>0){
                    if(glass[i-1][j]>1){
                        glass[i][j]=((glass[i-1][j]-1)/2.00);
                    }
                    if(j>0){
                        if(glass[i-1][j-1]>1){
                            glass[i][j]+=((glass[i-1][j-1]-1)/2.00);
                        }
                    }
                }
            }
        }
        
        return glass[query_row][query_glass]>1?1:glass[query_row][query_glass];
    }
};