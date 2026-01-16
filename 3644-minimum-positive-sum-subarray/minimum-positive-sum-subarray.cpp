class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            vector<int>subs;
            for(int j=i;j<nums.size();j++){
                 subs.push_back(nums[j]);
                 if(subs.size()>=l && subs.size()<=r){
                     int sum=0;
                     for(int k:subs){
                       sum=sum+k;
                     }
                     if(sum>0){
                       mini=min(mini,sum);
                     }
            
                 }
            }
        }
        if(mini==INT_MAX){
            return -1;
        }
        return mini;
    }
};