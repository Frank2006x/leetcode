// Last updated: 1/26/2026, 8:35:29 AM
class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> pos;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
        }
        if(pos.size()==0) return nums;
        int p=pos.size();
        int index=k%p;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                nums[i]=pos[index];
                index=(index+1)%p;
            }
        }
        return nums;
        
    }
};