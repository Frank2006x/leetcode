class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack <int> st;
        vector<int> res(heights.size(),0);
        for(int i=heights.size()-1;i>=0;i--){
            if(st.empty()){
                st.push(heights[i]);
                res[i]=0;
            }else{
                int c=0;
                while(!st.empty() && st.top()<heights[i]){
                    st.pop();
                    c++;
                }
                if(!st.empty()){
                    res[i]=c+1;
                }else{
                    res[i]=c;
                }
                st.push(heights[i]);
            }
        }
        return res;
    }
};