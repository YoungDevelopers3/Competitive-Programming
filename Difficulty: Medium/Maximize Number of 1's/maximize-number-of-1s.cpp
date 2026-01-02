class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        int zeros=0,left=0,right=0,n=arr.size(),len=0,max_len=INT_MIN;
        while(right<n){
            if(arr[right]==0){
                zeros++;
            }
            while(zeros>k){
                if(arr[left]==0){
                    zeros--;
                }
                left++;
                
            }
            if(zeros<=k){
                len=right-left+1;
                max_len=max(max_len,len);
            }
            right++;
        }
        
        return max_len;
        
    }
};
