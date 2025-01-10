class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        int mini=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            
            //if the array is right sorted
            if(nums[low]<=nums[mid]){
                mini=min(mini,nums[low]);
               low=mid+1;
            }
            //If the array is left sorted
            else{
             mini=min(mini,nums[mid]);
             high=mid-1;
              
            }
        }
        return mini;
    }
};