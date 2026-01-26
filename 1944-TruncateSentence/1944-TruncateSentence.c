// Last updated: 1/26/2026, 8:38:11 AM
char* truncateSentence(char* s, int k) {
    int i;
    int count=0;
    for (i =0;s[i]!='\0';i++){
        if (s[i]==' '){
            count++;
        }
        if (count==k){
            break;
        }
        
    }
    s[i]='\0';
    return s;
    

}