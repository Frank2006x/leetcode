// Last updated: 1/26/2026, 8:36:57 AM
class Solution {
public:
    string sortVowels(string s) {
        vector<int> index;
        vector<char> ch;
        for(int i=0;i<s.size();i++){
            if(tolower(s[i])=='a' || tolower(s[i])=='e' ||tolower(s[i])=='u' || tolower(s[i])=='i' || tolower(s[i])=='o' ){
                index.push_back(i);
                ch.push_back(s[i]);
            }
        }
        sort(ch.begin(),ch.end());

        for(int i=0;i<index.size();i++){
            s[index[i]]=ch[i];
        }
        return s;
    }
};