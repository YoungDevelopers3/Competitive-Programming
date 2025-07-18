class Solution {
public:
    bool search(vector<int>& nums, int target) {
      
        set<int>st(nums.begin(),nums.end());
        nums.clear();
        for(auto it=st.begin();it!=st.end();it++){
            nums.push_back(*it);
        }
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return true;
            }
            else  if(nums[low]<=nums[mid]){
                if(nums[mid]>=target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
             else if(nums[mid]<=nums[high]){
                if(target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
                
        }
        return false;
    }
};