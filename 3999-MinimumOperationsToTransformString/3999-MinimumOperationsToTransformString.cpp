// Last updated: 1/26/2026, 8:35:52 AM
class Solution {
public:
    int minOperations(string s) {
        char c='z';
        int ca=0;
        for(char i:s){
            if(i=='a'){
                ca++;
            }
           if(i<c && i!='a'){
               c=i;
           } 
        }
        if(ca==s.size()) return 0;
        return (26-c+'a')%26;
    }
};