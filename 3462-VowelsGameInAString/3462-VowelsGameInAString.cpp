// Last updated: 1/26/2026, 8:36:38 AM
class Solution {
public:
    bool doesAliceWin(string s) {
        int c=0;
        for(char i:s){
            if(i=='a' || i=='e' || i=='o'|| i=='i'||i=='u'){
                c++;
            }
        }
        if(c==0) return false;
        bool aTurn=true;
        bool aWin=true;
        while(c>0){
            if(aTurn){
                if(c%2==0){
                    c=1;
                }else{
                    c=0;
                    aWin=true;
                }
                aTurn=false;
            }else{
                if(c%2==0){
                    aWin=false;
                }else{
                    c=1;
                }
                aTurn=true;
            }
        }
        return aWin;
            
        
    }
};