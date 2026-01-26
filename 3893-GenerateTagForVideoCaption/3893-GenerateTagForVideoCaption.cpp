// Last updated: 1/26/2026, 8:36:07 AM
class Solution {
public:
    string generateTag(string caption) {
        bool isPrevSpace=false;
        string res="#";
        int n=caption.size();
        for(int i=0;i<n;i++){
            if(isalpha(caption[i])){
                if(i==0){
                    res+=tolower(caption[i]);
                    continue;
                }
                if(isPrevSpace){
                    res+=toupper(caption[i]);
                    isPrevSpace=false;
                }else{
                    res+=tolower(caption[i]);
                }
            }
            if(res[res.size()-1]!='#'){
                
            if(isspace(caption[i])){
                isPrevSpace=true;
            } else{
                isPrevSpace=false;
            }     
            }

            if(res.size()>=100){
                break;
            }
        }
        return res;
    }
};