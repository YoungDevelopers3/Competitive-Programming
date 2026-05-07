class Solution {
public:
    long long caltotalhr(vector<int>& piles,int hr){
       long long int total=0;
        for(int i=0;i<piles.size();i++){
            total+=ceil((double)piles[i]/(double)hr);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        sort(piles.begin(),piles.end());
      int high=piles[n-1];
        int ans=0;
        while(low<=high){
            int mid=low+((high-low)/2);
            long long int temp=caltotalhr(piles,mid);
            if(temp<=h){
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