// Last updated: 1/26/2026, 8:38:39 AM
int numIdenticalPairs(int* nums, int numsSize) {
    int c=0;
    for (int i=0;i<numsSize;i++){
        for (int j=i+1;j<numsSize;j++){
            if (nums[i]==nums[j]){
                c++;
            } 
        }
    }
    return c;
}