// Last updated: 1/26/2026, 8:36:40 AM
class Solution {
public:
    bool isValid(string word) {
        vector<char> v={'a','e','i','o','u','A','E','I','O','U',};
        int cv=0;
        int cc=0;
        int n=0;
        for(char i:word){
            if(isalpha(i)){
                if(find(v.begin(),v.end(),i)!=v.end()){
                    cv++;
                }else{
                    cc++;
                }
            }else if(isdigit(i)){
                n++;
            }else{
                return false;
            }

        }
        if((cc+cv+n)<3 || cv<1 || cc<1 ) return false;
        return true;
    }
};