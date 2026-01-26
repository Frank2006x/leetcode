// Last updated: 1/26/2026, 8:36:48 AM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> index;
        for (int i=0;i<words.size();i++){
            if (words[i].find(x)!=-1){
                index.push_back(i);
            }
        }
        return index;
        
    }
};