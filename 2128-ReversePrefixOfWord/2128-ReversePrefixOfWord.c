// Last updated: 1/26/2026, 8:37:50 AM
char* reversePrefix(char* word, char ch) {
    int end=0;
    int size=strlen(word);
    for (int i =0;i<size;i++){
        if (word[i]==ch){
            end=i;
            break;
        }
    }
    int mid=end/2;
    for (int i=0;i<=mid;i++){
        int temp=word[i];
        word[i]=word[end];
        word[end]=temp;
        end--;
    }
    return word;
}