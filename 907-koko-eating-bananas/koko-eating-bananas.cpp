class Solution {
public:

    bool isPossible(vector<int>piles,int h,int min_ban){
    double total_hours=0;
    for(int pile:piles){
        total_hours=total_hours+ceil((double)(pile)/(double)(min_ban));
    }
    
    if(total_hours<=h){
        return true;
    }
    else{
        return false;
    }
        
        
    }


    int minEatingSpeed(vector<int>& piles, int h) {
    sort(piles.begin(),piles.end());
    int n=piles.size();
    int low=1;
    int high=piles[n-1];
    int ans=0;
        while(low<=high){
        int mid=low+(high-low)/2;
    
        if(isPossible(piles,h,mid)){ 
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