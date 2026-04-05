class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0;
        int y=0;
        for(char i:moves){
            if(i=='L'){
                y--;
            }else if(i=='R'){
                y++;
            }else if(i=='U'){
                x++;
            }else{
                x--;
            }
        }
        return (x==0 && y==0);
    }
};