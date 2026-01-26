// Last updated: 1/26/2026, 8:36:50 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    // *returnSize=0;
    // for (int i=0;i<wordsSize;i++){
    //     for (int j=0;j<strlen(words[i]);j++){
    //         if (words[i][j]==x){
    //             *returnSize=*returnSize+1;
    //             break;
    //         }
    //     }
    // }
    int *res=(int*)malloc((50)*sizeof(int));
    int index=0;
    for (int i=0;i<wordsSize;i++){
        for (int j=0;j<strlen(words[i]);j++){
            if (words[i][j]==x){
                res[index]=i;
                index++;
                break;
                
            }
        }
    }
    *returnSize=index;
    return res;

}