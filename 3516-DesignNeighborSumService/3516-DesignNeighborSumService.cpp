// Last updated: 1/26/2026, 8:36:32 AM
class NeighborSum {
public:
    vector<vector<int>> grid;
    NeighborSum(vector<vector<int>>& grid) {
        this->grid=grid;
    }
    
    int adjacentSum(int value) {
        int sum=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]==value){
                    if(i>0){
                        sum+=grid[i-1][j];
                    }
                    if(i<grid.size()-1){
                        sum+=grid[i+1][j];
                    }
                    if(j>0){
                        sum+=grid[i][j-1];
                    }
                    if(j<grid.size()-1){
                        sum+=grid[i][j+1];
                    }
                }
                
            }
        }
        return sum;
    }
    
    int diagonalSum(int value) {
        int sum=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]==value){
                    if(i>0 &&j>0){
                        sum+=grid[i-1][j-1];
                    }
                    if(i<grid.size()-1 && j<grid.size()-1){
                        sum+=grid[i+1][j+1];
                    }
                    if(i>0 &&j<grid.size()-1){
                        sum+=grid[i-1][j+1];
                    }
                    if(i<grid.size()-1 && j>0){
                        sum+=grid[i+1][j-1];
                    }
                    
                }
                
            }
        }
        return sum;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */