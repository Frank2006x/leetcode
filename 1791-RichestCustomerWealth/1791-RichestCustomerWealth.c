// Last updated: 1/26/2026, 8:38:23 AM
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int  high_wealth=0;
     for (int i=0;i<accountsSize;i++){
        int wealth=0;
        for (int j=0;j<*accountsColSize;j++){
                        
            wealth+=accounts[i][j];
        }        
        if (wealth>high_wealth){
            high_wealth=wealth;
        }

    }  
    return high_wealth;
}