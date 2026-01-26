// Last updated: 1/26/2026, 8:36:04 AM
class Solution {
public:
    bool isPrime(int num){
        if(num<0) num=abs(num);
        if(num<=1) return false;
        if(num==2) return true;
        if(num%2==0) return false;
        for(int i=3;i*i<=num;i+=2){
            if(num%i==0){ 
                return false;
            };
        }
        return true;
        
    }
    long long splitArray(vector<int>& nums) {
        long long sumA=0;
        long long sumB=0;
        for(int i=0;i<nums.size();i++){
            if(isPrime(i)){
                sumA+=nums[i];
            }else{
                sumB+=nums[i];
            }
        }
        return abs(sumA-(sumB));
    }
};