// Last updated: 1/26/2026, 8:36:29 AM
class Solution {
public:
    string change(string &w){
        int n=w.size();
        for(int i=0;i<n;i++){
            if(w[i]=='z'){
                w+="a";
            }else{
                w+=(char)(w[i]+1);
            }
        }
return w;
    }
    char kthCharacter(int k) {
        string word="a";
        while(true){
            if(word.size()>=k){
                return word[k-1];
            }
            word=change(word);
        }
        return word[k-1];
    }
};