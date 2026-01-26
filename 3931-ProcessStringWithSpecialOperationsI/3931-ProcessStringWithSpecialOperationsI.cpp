// Last updated: 1/26/2026, 8:36:05 AM
class Solution {
public:
    void reverse(string& s) {
        int start = 0;
        int end = s.size() - 1;
        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    string processStr(string s) {

        string res = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                res += s[i];
                
            } else if (s[i] == '#') {
                res += res;
            } else if (s[i] == '%') {
                reverse(res);
            } else {
                int n = res.size();
                if (n >= 1){
                    res = res.substr(0, n - 1);
                }
                else{
                    res = "";
                }
            }
            
        }
        return res;
    }
};