class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
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
        
        while(!pq.empty()  ||  !cooldown.empty()){
            time++;
            if(!pq.empty()){
                int rem=pq.top()-1;
                pq.pop();
                
                if(rem>0){
                    cooldown.push({rem,time+K});
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