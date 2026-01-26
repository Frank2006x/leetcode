// Last updated: 1/26/2026, 8:38:02 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int *res=(int*)malloc((2*numsSize)*sizeof(int));
    *returnSize=2*numsSize;
    for(int i=0;i<2*numsSize;i++){
        int n=i%numsSize;
        res[i]=nums[n];
    }
    return res;
}