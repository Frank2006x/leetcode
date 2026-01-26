// Last updated: 1/26/2026, 8:36:03 AM
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int l=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                l++;
            }else{
                break;
            }
            
        }
        if(l==0) return false;
        int x=0;
        for(int i=l+1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                x++;
            }else{
                break;
            }
            
        }
        if(x==0)return false;
        int y=0;
        for(int i=x+l+1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                y++;
            }else{
                break;
            }
            
        };
   
        if(y==0 || y+x+l!=nums.size()-1) return false;
        
        return true;
    }
};