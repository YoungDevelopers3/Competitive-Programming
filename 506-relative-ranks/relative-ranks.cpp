class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int>pq;
        for(int i:score){
            pq.push(i);
        }
        unordered_map<int,string>mp;
        int counter=0;
        while(!pq.empty()){
            int a=pq.top();
            counter++;
            if(counter==1){
                mp[a]="Gold Medal";
            }
            else if(counter==2){
                mp[a]="Silver Medal";
            }
            else if(counter==3){
                mp[a]="Bronze Medal";
            }
            else{
                mp[a]=to_string(counter);
            }
            pq.pop();
        }
        vector<string>ans;
        for(int i:score){
            ans.push_back(mp[i]);
        }
        return ans;


    }
};