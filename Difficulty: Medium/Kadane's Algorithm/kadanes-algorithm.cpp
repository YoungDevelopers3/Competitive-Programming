class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int max_sum=INT_MIN;
        int current_sum=0;
        for(int i:arr){
            current_sum+=i;
            max_sum=max(max_sum,current_sum);
            if(current_sum<0){
                current_sum=0;
            }
            
        }
        return max_sum;
        
    }
};