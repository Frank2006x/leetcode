// Last updated: 1/26/2026, 8:37:29 AM
int countPrefixes(char** words, int wordsSize, char* s) {
    int k=0;
    char copy[100];
    strcpy(copy,s);
    for (int i=0;i<wordsSize;i++){
        int len=strlen(words[i]);
        
        if (strncmp(copy,words[i],len)==0){
            k++;
        }
        strcpy(copy,s);


    }
    
    return k;
}