class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int i=0;
        int j=0;
        int s=0;
        int max_s=0;
        while(j<arr.size()){
            s=s+arr[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                max_s=max(max_s,s);
                s=s-arr[i];
                i++;
                j++;
            }
        }
        return max_s;
        
    }
};