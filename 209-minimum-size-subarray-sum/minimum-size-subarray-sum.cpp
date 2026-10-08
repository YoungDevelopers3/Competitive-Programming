class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int len=INT_MAX;
        vector<long long>prev(n+1,0);
        for(int i=0;i<nums.size();i++){
            prev[i+1]=prev[i]+nums[i];
        }
        for(int i=0;i<nums.size();i++){
           int need=prev[i]+target;
           auto it=lower_bound(prev.begin()+i+1,prev.end(),need);
           if(it!=prev.end()){
             int j=it-prev.begin();
             len=min(len,j-i);
           }
        }
        return len==INT_MAX ? 0:len;
    }
};