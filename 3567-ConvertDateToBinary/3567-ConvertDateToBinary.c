// Last updated: 1/26/2026, 8:36:31 AM
char *numToBinary(int num){
    char *res=(char*)malloc(33);
    res[0]='\0';
    while (num>0){
        int k=num%2;
        if (k==0){
            strcat(res,"0");
        }else{
            strcat(res,"1");
        }
        num/=2;

    }
    int size=strlen(res)-1;
    int mid=strlen(res)/2;
    for (int i=0;i<mid;i++){
        int temp=res[size];
        res[size]=res[i];
        res[i]=temp;
        size--;
    }
    return res;

} 

int strTonum(char *date){
    int res=0;
    int index=strlen(date)-1;
    for (int i=0;i<=strlen(date)-1;i++){
        res+=(int)(date[i]-'0')*pow(10,index);
        index--;
    }
    return res;
}

char* convertDateToBinary(char* date) {
    char *res=(char*)malloc(50);
    res[0]='\0';
    char *token=strtok(date,"-");
    while (token!=NULL){
        int num=strTonum(token);
        char *str=numToBinary(num);
        strcat(res,str);
        strcat(res,"-");
        
        
        token=strtok(NULL,"-");
    }
    res[strlen(res)-1]='\0';
    return res;
}