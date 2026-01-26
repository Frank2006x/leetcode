// Last updated: 1/26/2026, 8:38:03 AM
class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2!=0) return  num.substr(0,i+1);
        }
        return "";
    }
};