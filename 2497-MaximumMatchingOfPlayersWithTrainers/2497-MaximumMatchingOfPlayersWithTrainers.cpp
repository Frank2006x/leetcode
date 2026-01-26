// Last updated: 1/26/2026, 8:37:22 AM
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int index=0;
        int c=0;
        int i=0;
        while(i<players.size() && index<trainers.size()){
            if(players[i]<=trainers[index]) {
                c++;
                i++;
            }
            index++;
        }
        return c;
    }
};