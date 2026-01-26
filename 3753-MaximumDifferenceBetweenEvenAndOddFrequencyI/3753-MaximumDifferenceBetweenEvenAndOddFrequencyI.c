// Last updated: 1/26/2026, 8:36:24 AM
int maxDifference(char* s) {
    int freq[26]={0};
    int len =strlen(s);
    for (int i=0;i<len;i++){
        freq[s[i]-'a']++;
    }
    
    
    
    int odd=0;
    int even=100;
    for (int i=0;i<26;i++){
        if (freq[i]>0){
            if (freq[i]%2==0){
                if (freq[i]<even){
                    even=freq[i];
                }
            }else{
                if (freq[i]>odd){
                    odd=freq[i];
                }
            }



        }
        
    }
    if (even==100){
        return odd;
    }
            
    return odd-even;
            
        
    
}