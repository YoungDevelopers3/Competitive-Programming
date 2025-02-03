class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int high=piles[n-1];
        int low=1;
        int ans=0;
        while(low<=high){
             
            int mid=low+(high-low)/2;
            long long int hours =0;
            for(int pile:piles){
                // hours=hours+ceil((double)pile/mid);
                if(pile%mid==0)
                hours+= pile/mid;
                else
                {hours+= pile/mid;
                hours++;
                }
            }
         

            if(hours<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }  
        return ans;
         
    }
};