// Last updated: 1/26/2026, 8:35:31 AM
class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int o1=-1;
        int o2=-1;
        int o3=-1;
        int t1=-1;
        int t2=-1;
        int t3=-1;
        int r1=-1;
        int r2=-1;
        int r3=-1;
        for(int i:nums){
            if(i%3==0){
                if(i>r1){
                    r3=r2;
                    r2=r1;
                    r1=i;
                }else if(i>r2){
                    r3=r2;
                    r2=i;
                }else if(i>r3){
                    r3=i;
                }
            }else if(i%3==2){
                  if(i>t1){
                    t3=t2;
                    t2=t1;
                    t1=i;
                }else if(i>t2){
                    t3=t2;
                    t2=i;
                }else if(i>t3){
                    t3=i;
                }
            }else if(i%3==1){
                if(i>o1){
                    o3=o2;
                    o2=o1;
                    o1=i;
                }else if(i>o2){
                    o3=o2;
                    o2=i;
                }else if(i>o3){
                    o3=i;
                }
            }
        }
        int res=0;
        
        if(o1!=-1 && o3!=-1 && o2!=-1 ){
            res=max(res,o1+o2+o3);
        }
        if(r1!=-1 && r3!=-1 && r2!=-1 ){
            res=max(res,r1+r2+r3);
        }
        if(t1!=-1 && t3!=-1 && t2!=-1 ){
            res=max(res,t1+t2+t3);
        }
        if(o1!=-1 && t1!=-1 && r1!=-1){
            res=max(o1+t1+r1,res);
        }
        return res;
    }

}
;