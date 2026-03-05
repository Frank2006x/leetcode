class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;
        for(char i:s){
            map[i]++;
        }
        for(char i:t){
            map[i]--;
            if(map[i]==0){
                map.erase(i);
            }
        }
        return map.size()==0;
            
    }
};