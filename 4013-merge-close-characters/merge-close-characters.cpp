class Solution {
public:
    string mergeCharacters(string s, int k) {
        bool merge=false;
        while(true){
            merge=false;
            for(int i=0;i<s.size();i++){
                for(int j=i+1;j<s.size();j++){
                    if(s[i]==s[j] && (j-i)<=k){
                        s.erase(j,1);
                        
                        merge=true;
                        break;
                    }
                }
                if(merge){
                    break;
                }
            }
            if(!merge){
                break;
            }
        }
        return s;
    }
};