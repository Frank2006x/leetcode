// Last updated: 1/26/2026, 8:38:37 AM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            int mk=arr[mid]-(mid+1);
            if(mk>=k){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return k+high+1;
    }
};