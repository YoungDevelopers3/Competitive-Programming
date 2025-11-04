class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        
        if(N % groupSize!=0 || groupSize==0){
            return false;            
        }
        
        unordered_map<int,int>freq;
        for(int i:hand){
            freq[i]++;
        }
        
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(auto p:freq){
           pq.push(p.first);
            
        }
        
        while(!pq.empty()){
            int s=pq.top();
            if(freq[s]==0){
                pq.pop();
                continue;
            }
            
            for(int i=s;i<s+groupSize;i++){
                if(!freq.count(i) ||freq[i]==0 ){
                    return false;
                }
                freq[i]--;
            }
        }
        
        return true;
                
    }
};