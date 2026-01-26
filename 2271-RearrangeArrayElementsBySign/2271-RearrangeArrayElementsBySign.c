// Last updated: 1/26/2026, 8:37:45 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int *res=malloc(numsSize*sizeof(int));
    // if (!res) return NULL;
    int pos=0;
    int neg=1;
    for (int i=0;i<numsSize;i++){
        if (nums[i]>0){
            res[pos]=nums[i];
            pos+=2;
        }else{
            res[neg]=nums[i];
            neg+=2;
        }
    }
    *returnSize=numsSize;
    return res;
    
}