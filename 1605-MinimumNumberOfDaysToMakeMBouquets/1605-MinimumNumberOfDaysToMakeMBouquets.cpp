// Last updated: 1/26/2026, 8:38:45 AM
class Solution {
public:
    bool check(vector<int> &bloomDay,int m,int k,int day){
        int cc=0;
        int c=0;
        for(int i:bloomDay){
            if(i<=day){
                cc++;
            }else{
                cc=0;
            }
            if(cc>=k){
                c++;
                cc=0;
            }
        }
        return c>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
    if (bloomDay.size() < 1LL * m * k) return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int mid;
        int res=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(check(bloomDay,m,k,mid)){
                high=mid-1;
                res=mid;
            }else{
                low=mid+1;
            }
        }
        return res;
    }
};