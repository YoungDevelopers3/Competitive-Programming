class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        vector<int>temp;
         priority_queue<int, vector<int>, greater<int>> pq;
         int index=0;
         for(int i:arr){
             pq.push(i);
             if(pq.size()>k){
                 arr[index++]=pq.top();
                 pq.pop();
             }
         }
         
         while(!pq.empty()){
             arr[index++]=pq.top();
             pq.pop();
         }
        
    }
};