class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int low=INT_MAX;
        for(int i:prices){
            low=min(low,i);
            profit=max(profit,i-low);
        }
        return profit;
    }
};