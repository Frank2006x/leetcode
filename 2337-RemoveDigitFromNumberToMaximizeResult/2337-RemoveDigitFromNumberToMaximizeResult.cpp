// Last updated: 1/26/2026, 8:37:31 AM
class Solution {
public:
    string removeDigit(string number, char digit) {

        string maxInt="";
        for(int i=0;i<number.size();i++){
            if(number[i]==digit){
                string temp=number;
                temp.erase(temp.begin()+i);
                if(temp>maxInt){
                    maxInt=temp;
                }
            }
        }
        return maxInt;
    }
};