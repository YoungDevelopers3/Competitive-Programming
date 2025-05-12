class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int product=1;
        int n=nums.size();
        int zero=0,index=-1;
        for(int i=0;i<n;i++){
               if(nums[i]==0){
                zero++;
                index=i;
                continue;
               }
            product=product * nums[i];
        }
        vector<int>result(n,0);
        if(zero==1){
            result[index]=product;
            return result;
        }
        else if(zero>1){
            return result;
        }
        else{
           for(int i=0;i<n;i++){
              result[i]=product/nums[i];
           }
              
        }
    return result;
        


    }
};