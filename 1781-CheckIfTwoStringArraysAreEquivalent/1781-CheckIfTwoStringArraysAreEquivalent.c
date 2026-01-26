// Last updated: 1/26/2026, 8:38:25 AM
bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    int m=1;
    char *res=(char*)malloc(m);
    res[0]='\0';
    int n=1;
    char *ress=(char*)malloc(n);
    ress[0]='\0';
    for (int i=0;i<word1Size;i++){
        m+=strlen(word1[i]);
        res=(char*)realloc(res,m);
        strcat(res,word1[i]);
    }
    for(int i=0;i<word2Size;i++){
        n+=strlen(word2[i]);
        ress=(char*)realloc(ress,n);
        strcat(ress,word2[i]);
    }
    bool result =(strcmp(res,ress)==0);
    free(res);
    free(ress);
    return result;

}