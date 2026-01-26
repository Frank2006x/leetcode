// Last updated: 1/26/2026, 8:37:27 AM
class Solution {
public:
    string largestGoodInteger(string num) {
        int maX=INT_MIN;
        string sMax="";
        for(int i=2;i<num.size();i++){
            if(num[i-2]== num[i-1] && num[i-1] == num[i]){
                
                int k=(num[i]-'0')*111;
                if(k==0 && k>maX){
                    maX=0;
                    sMax="000";
                }else{
                if(k>maX){
                    maX=k;
                    sMax=to_string(maX);
                }

                }
            }
        }
        return sMax;
    }
};