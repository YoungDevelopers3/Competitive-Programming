class Solution {
  public:
    int minCost(vector<int>& arr) {
        if(arr.size()<=1){
            return 0;
        }
        
        priority_queue<long long,vector<long long>,greater<long long>>pq(arr.begin(),arr.end());
        
        long long total=0;
        
        while(pq.size()>=2){
            long long a=pq.top();
            pq.pop();
            long long b=pq.top();
            pq.pop();
            long long cost=a+b;
            total=total+cost;
            pq.push(cost);
        }
        
        return total;
    }
};