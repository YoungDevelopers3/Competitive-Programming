class Solution {
  public:
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2) {
       priority_queue<int>pq;
       long long s=0;
       for(int i=0;i<N;i++){
           pq.push(A[i]);
           if(pq.size()>K2){
               pq.pop();
           }
       }
    
       pq.pop();
       while(pq.size()>K1){
           s=s+pq.top();
           pq.pop();
       }
       return s;
       
       
       
       
       
       
       
    }
};