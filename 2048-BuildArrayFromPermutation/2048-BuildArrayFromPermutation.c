// Last updated: 1/26/2026, 8:38:00 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int *res=(int*)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    for (int i=0;i<numsSize;i++){
        res[i]=nums[nums[i]];
    }
    return res;
    
}