// Last updated: 1/26/2026, 8:36:16 AM
class Solution {
public:
    bool hasSameDigits(string s) {
        string root=s;
        while(root.size()>2){
            string curr="";
            for(int i=0;i<root.size()-1;i++){
                int num=((root[i]-'0')+(root[i+1]-'0'))%10;
                curr+=to_string(num);
            }
            root=curr;
            curr="";
        }
        if(root[0]==root[1]) return true;
        return false;
    }
};