class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
       
       unordered_map<int,int>freq;
        for(int i:arr){
            freq[i]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto& [val,count]:freq){
            pq.push({count,val});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
       
       
       
       
        
    }
};
