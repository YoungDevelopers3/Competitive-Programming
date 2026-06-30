class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
         long long sum=0;
         
        for(int i=0;i<k;i++){
             if(mul>0){
                 sum=sum+(1LL*nums[i]*mul);
             }
             else{
                 sum=sum+(1LL*nums[i]);
             }
            mul--;
        }
        return sum;



        
    }
};