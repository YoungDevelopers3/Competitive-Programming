class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
         priority_queue<int, vector<int>, greater<int>>pq;
         
         for(int i:arr){
             pq.push(i);
             if(pq.size()>k){
                 pq.pop();
             }
         }
         vector<int>ans;
         while(pq.size()>0){
             int a=pq.top();
             ans.push_back(a);
             pq.pop();
         }
         sort(ans.begin(),ans.end());
         reverse(ans.begin(),ans.end());
         return ans;
         
    }
};