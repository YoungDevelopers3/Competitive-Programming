class Solution {
public:
struct cmp {
        bool operator()(pair<int,int>& a, pair<int,int>& b) {
            if (a.first == b.first)
                return a.second < b.second; // same freq → larger number first
            return a.first > b.first;       // smaller freq on top (min-heap)
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }
      
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;

        for(int i:nums){
            pq.push({freq[i],i});
        }
        int index=0;
        while(!pq.empty()){
            nums[index++]=pq.top().second;
            pq.pop();
        }
        return nums;


    }
};