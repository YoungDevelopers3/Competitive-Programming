class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0,BestBuy=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>BestBuy){
                max_profit=max(max_profit,prices[i]-BestBuy);
            }
            BestBuy=min(prices[i],BestBuy);
        }
        return max_profit;
    }
};