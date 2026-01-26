// Last updated: 1/26/2026, 8:37:14 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int l=0;
    int r=0;
    for (int i=0;i<numsSize;i++){
        r+=nums[i];
    }
    *returnSize=numsSize;
    int *res=(int*)malloc(numsSize*sizeof(int));
    
    for (int i=0;i<numsSize;i++){
        r-=nums[i];
        // printf(" l= %d r=%d",l,r);
        res[i]=abs(l-r);
        l+=nums[i];
        
        

    }
    return res;
}