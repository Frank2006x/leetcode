// Last updated: 1/26/2026, 8:36:58 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** splitWordsBySeparator(char** words, int wordsSize, char separator, int* returnSize) {
    char **res=(char**)malloc(1000*sizeof(char*));
    int index=0;
    for (int i=0;i<wordsSize;i++){
        char *token=strtok(words[i],&separator);
        while (token!=NULL){
            res[index]=(char*)malloc(100*sizeof(char));
            strcpy(res[index],token);
            token=strtok(NULL,&separator);
            index++;

        }


    }
    *returnSize=index;
    return res;
}