class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>freq;
        for(char ch:tasks){
            freq[ch]++;
        }
        priority_queue<int>pq;
        for(auto p:freq){
            pq.push(p.second);
        }
        int time=0;
        queue<pair<int,int>>cooldown;
        
        while(!pq.empty() || !cooldown.empty()){
            time++;
            if(!pq.empty()){
                int remanining =pq.top()-1;
                pq.pop();

                if(remanining>0){
                    cooldown.push({remanining,time+n});
                }

            }

            if(!cooldown.empty() && cooldown.front().second==time){
                pq.push(cooldown.front().first);
                cooldown.pop();
            }

        }

        return time;
    }
};