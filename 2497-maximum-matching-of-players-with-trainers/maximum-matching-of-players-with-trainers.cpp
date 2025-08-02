class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int counter=0,p=0,t=0;
        while(p<players.size() && t<trainers.size()){
            if(players[p]<=trainers[t]){
                p++;
                t++;
                counter++;
            }
            else{
                t++;
            }
        }
        return counter;
    }
};