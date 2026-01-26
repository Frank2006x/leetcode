// Last updated: 1/26/2026, 8:38:29 AM
class Solution {
public:
    string addop(string s,int num){
        for(int i=1;i<s.size();i+=2){
            int n=s[i]-'0';
            n=(n+num)%10;
            s[i]=n+'0';
        }
        return s;
    }
    string rotate(string s,int num){
        int n=s.size();
        num%=n;
        return s.substr(n-num)+s.substr(0,n-num);
    }
    string findLexSmallestString(string s, int a, int b) {
        queue<string> q;
        unordered_set<string> visited;
        string res=s;
        q.push(s);
        visited.insert(s);
        while(!q.empty()){
            string c=q.front();
            q.pop();
            res=min(c,res);
            string a1=addop(c,a);
            string a2=rotate(c,b);
            if(visited.find(a1)==visited.end()){
                q.push(a1);
                visited.insert(a1);
            }
            if(visited.find(a2)==visited.end()){
                q.push(a2);
                visited.insert(a2);
            }
        }
        return res;
    }
};