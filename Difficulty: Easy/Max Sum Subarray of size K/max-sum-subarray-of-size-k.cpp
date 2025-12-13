class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int bunty =0;
        int bubli=0;
        long long sum=0;
        long long max_sum=LLONG_MIN;
        while(bunty<arr.size()){
            sum=sum+arr[bunty];
            if(bunty-bubli+1<k){
                bunty++;
            }
            else if(bunty-bubli+1==k){
                max_sum=max(sum,max_sum);
                sum=sum-arr[bubli];
                bubli++;
                bunty++;
            }
        }
        
        return max_sum;
        
    }
};