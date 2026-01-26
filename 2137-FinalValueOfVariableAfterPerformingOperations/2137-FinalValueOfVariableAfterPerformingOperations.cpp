// Last updated: 1/26/2026, 8:37:49 AM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(auto i:operations){
            if(i=="++X" || i=="X++"){
                x++;
            }else{
                x--;
            }
        }  
        return x;
    }
};