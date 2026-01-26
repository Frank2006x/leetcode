// Last updated: 1/26/2026, 8:37:21 AM
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** twoEditWords(char** queries, int queriesSize, char** dictionary, int dictionarySize, int* returnSize) {
    char **words=(char **)malloc(queriesSize*sizeof(char*));
    int index=0;
    for (int i=0;i<queriesSize;i++){
        int len=strlen(queries[i]);
        for (int j=0;j<dictionarySize;j++){
            int c=0;
            for (int k=0;k<strlen(queries[i]);k++){
                if (queries[i][k]!=dictionary[j][k]){
                    c++;
                    if(c>2){break;}
                }
            }
            if (c<=2){
                words[index]=(char*)malloc((len+1)*sizeof(char));
                strcpy(words[index],queries[i]);
                index++;
                break;
            }

        }
    }
    *returnSize=index;
    return words;
}