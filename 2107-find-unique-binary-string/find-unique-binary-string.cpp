class Solution {
public:
    string res="";
    void generate(string cur,unordered_map<string,int>& map,int index,int n){
        if(cur.size()>=n){
            if(map.find(cur)==map.end()){
                res=cur;
            }
            return ;
            
        }
        if(res.size()>0) return;
        for(int i=0;i<2;i++){
            cur+=to_string(i);
            generate(cur,map,index+1,n);
            cur.pop_back();
        }
        
    }
    string findDifferentBinaryString(vector<string>& nums) {
        string cur="";
        
        
        unordered_map<string,int> map;
        for(auto i:nums){
            map[i]=1;
        }
        int n=nums.size();
        generate(cur,map,0,n);
        return res;
    }
};