// Last updated: 1/26/2026, 8:36:09 AM
class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> map;
        unordered_map<char,int> cmap;
        for(char i :s){
            if(i=='a' || i=='o' || i=='u' || i=='e' || i=='i' ){
                map[i]++;
            }else{
                cmap[i]++;
            }
        }
        int mv=0;
        for(auto i :map){
            mv=max(mv,i.second);
        }
        int mc=0;
        for(auto i:cmap){
            mc=max(mc,i.second);
        }
        
        return mv+mc;
    }
};