class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=0;
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int high=piles[n-1];
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            int k=mid;
            double total=0;
            for(int i:piles){
                total+=ceil((double)i/k);
            }
            if(total<=h){
                ans=min(ans,k);
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;



    }
};