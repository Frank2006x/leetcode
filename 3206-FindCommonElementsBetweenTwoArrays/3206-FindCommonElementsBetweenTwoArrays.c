// Last updated: 1/26/2026, 8:36:47 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int arr[101]={0};
    int arr1[101]={0};
    for (int i=0;i<nums1Size;i++){arr[nums1[i]]++;}
    for (int i=0;i<nums2Size;i++){arr1[nums2[i]]++;}
    int ans1=0;int ans2=0;
    for (int i=0;i<nums2Size;i++){
        if (arr[nums2[i]]>0){
            ans2++;
        }

    }
    for (int i=0;i<nums1Size;i++){
        if (arr1[nums1[i]]>0){
            ans1++;
        }
    }
    *returnSize=2;
    int *res=(int*)malloc(8);
    res[0]=ans1;
    res[1]=ans2;
    return res;
    
}