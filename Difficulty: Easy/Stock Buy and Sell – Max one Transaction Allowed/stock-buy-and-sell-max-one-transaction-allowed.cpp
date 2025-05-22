class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int profit=0;
        int low=INT_MAX;
        for(int i:prices){
            low=min(low,i);
            profit=max(profit,i-low);
        }
        return profit;
    }
};
