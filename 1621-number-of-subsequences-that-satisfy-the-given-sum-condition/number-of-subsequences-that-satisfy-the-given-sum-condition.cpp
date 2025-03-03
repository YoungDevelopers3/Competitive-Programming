class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=n-1,c=0;
        vector<int>temp(n,1);
        int m=1e9+7;
        for(int i=1;i<n;i++){
             temp[i]=(temp[i-1]*2)%m;
        }
        
        while(i<=j){
            if(nums[i]+nums[j]<=target){
               c=(c+temp[j-i])%m;
               i++;
            }
            else{
                j--;
            }
        }
        return c;



    }
};