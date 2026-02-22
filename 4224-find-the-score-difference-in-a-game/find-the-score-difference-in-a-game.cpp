class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        vector<pair<int,bool>>players={{0,true},{0,false}};
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
               players[0].second= !players[0].second;
               players[1].second=!players[1].second; 
            }
            if((i+1)%6==0){
               players[0].second= !players[0].second;
               players[1].second=!players[1].second; 
            }
            for(int j=0;j<2;j++){
                    if(players[j].second){
                        players[j].first=players[j].first+nums[i];
                    }
                }
            
        }
        return players[0].first-players[1].first;
    }
};