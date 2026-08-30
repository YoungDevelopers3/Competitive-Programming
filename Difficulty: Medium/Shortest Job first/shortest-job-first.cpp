class Solution {
  public:
    int solve(vector<int>& bt) {
        // code here
        int n=bt.size();
        int waiting_time=0;
        int total_waiting_time=0;
        sort(bt.begin(),bt.end());
        for(int i:bt){
            total_waiting_time+=waiting_time;
            waiting_time+=i;
        }
        
        return total_waiting_time/n;
        
        
        
    }
};