class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> oneArr;
        for(int i:arr){
            int n=i;
            int c=0;
            while(n>0){
                if(n & 1){
                    c++;
                }
                n>>=1;
            }
            oneArr.push_back(c);
        }
       
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(oneArr[j]>oneArr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swap(oneArr[j],oneArr[j+1]);
                }else  if(oneArr[j]==oneArr[j+1] && arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swap(oneArr[j],oneArr[j+1]);
                }
                
            }
        }
        return arr;
    }
};