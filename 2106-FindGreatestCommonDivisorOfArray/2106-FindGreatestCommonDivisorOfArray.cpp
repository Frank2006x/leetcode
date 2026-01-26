// Last updated: 1/26/2026, 8:37:55 AM
class Solution {
public:
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }

    int findGCD(vector<int>& nums) {
        auto maxIt=max_element(nums.begin(),nums.end());
        auto minIt=min_element(nums.begin(),nums.end());

        return gcd(*maxIt,*minIt);
    }
};