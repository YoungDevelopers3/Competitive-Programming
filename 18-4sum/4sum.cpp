class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i-1]==nums[i]){
                continue;
            }
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j-1]==nums[j]){
                    continue;
                }
                int p=j+1;
                int q=nums.size()-1;
                while(p<q){
                    long long int sum=1LL*nums[i]+nums[j]+nums[p]+nums[q];
                    if(sum>target){
                        q--;
                    }
                    else if(sum<target){
                        p++;
                    }
                    else{
                        ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                        p++;
                        q--;
                        while(p<q && nums[p-1]==nums[p]){
                           p++;
                        }
                        while(p<q && nums[q]==nums[q+1]){
                            q--;
                        }

                    }

                }
                
            }
            
        }

       return ans;







    }
};