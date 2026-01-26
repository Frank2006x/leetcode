// Last updated: 1/26/2026, 8:38:22 AM
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int index=0;
        int n=students.size();
        vector<int> vis(n,0);
        stack<int> st;
        for(int i=sandwiches.size()-1;i>=0;i--){
            st.push(sandwiches[i]);
        }
        int noProgress=0;
        while(!st.empty()){
            if(vis[index]==0 && st.top()==students[index]){
                st.pop();
                vis[index]=1;
                noProgress=0;
            }else{
                index=(index+1)%n;
                noProgress++;
                if(noProgress==n) break;
            }
        }
        return st.size();

    }
};