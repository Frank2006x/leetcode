// Last updated: 1/26/2026, 8:38:30 AM
class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxD = INT_MIN;
        int d = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                d++;
                st.push('(');
            } else if (s[i] == ')'  && !st.empty() && st.top() == '(') {
                d--;
                st.pop();
            }
  
            maxD=max(maxD,d);
        }
        return maxD;
    }
};