// Last updated: 1/26/2026, 8:38:33 AM
int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum=0;
    for (int i=0;i<*matColSize;i++){
        sum+=(*(*(mat+i)+i));
        
        
    }
    int index=0;
    for (int i=*matColSize-1;i>=0;i--){
        sum+=(*(*(mat+index)+i));
        index++;
        
        
    }
    if (*matColSize%2==0){
        return sum;
    }else{
        int mid=*matColSize/2;
        sum-=(*(*(mat+mid)+mid));
        return sum;
    }
}