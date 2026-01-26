// Last updated: 1/26/2026, 8:38:18 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {
    int *res=(int *)malloc(strlen(boxes)*sizeof(int));
    for (int i=0;i<strlen(boxes);i++){
        res[i]=0;
    }
    for (int i=0;i<strlen(boxes);i++){
        for (int j=0;j<strlen(boxes);j++){
            if (boxes[j]=='1'){
                res[i]+=abs(j-i);
            }
        }
    }
    *returnSize=strlen(boxes);
    return res;
}