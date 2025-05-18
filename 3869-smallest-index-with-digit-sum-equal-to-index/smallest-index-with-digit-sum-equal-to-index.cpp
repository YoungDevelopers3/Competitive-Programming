class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            int n=nums[i];
            while(n>0){
            int d=n%10;
            sum=sum+d;
            n=n/10;
            }
            if(sum==i){
                mini=min(mini,sum);
            } 
            
        }
         if(mini!=INT_MAX){
             return mini;
         }
        else{
            return -1;
        }

        
    }
};