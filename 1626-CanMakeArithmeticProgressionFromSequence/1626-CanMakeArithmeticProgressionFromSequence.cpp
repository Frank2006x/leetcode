// Last updated: 1/26/2026, 8:38:44 AM
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size()<=1) return true;
        sort(arr.begin(),arr.end());
        int diff=arr[1]-arr[0];
        int n=arr.size();
        for(int i=2;i<n;i++){
            if(arr[i]-arr[i-1]!=diff){
                return false;
            }
        }
        return true;
    }
};