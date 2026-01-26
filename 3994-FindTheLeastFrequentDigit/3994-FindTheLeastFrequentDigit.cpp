// Last updated: 1/26/2026, 8:35:57 AM
class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int> map;
        while(n>0){
            int k=n%10;
            map[k]++;
            n/=10;
        }
        int mc=INT_MAX;
        int res;
        for(auto i:map){
            if(mc>i.second){
                res=i.first;
                mc=i.second;
            }
        }
        for(auto i:map){
            if(mc==i.second){
                res=min(i.first,res);
            }
        }
        return res;
    }
};