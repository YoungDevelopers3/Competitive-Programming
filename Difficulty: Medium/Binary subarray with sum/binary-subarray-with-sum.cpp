class Solution {
    
    
    private:
    
    int atMost(vector<int>& arr, int target) {
        if(target<0){
            return 0;
        }
        int left=0,right=0,n=arr.size(),sum=0,count=0;
        for(int right=0;right<n;right++){
            sum=sum+arr[right];
            while(sum>target){
                sum=sum-arr[left];
                left++;
            }
            
           count=count+(right-left+1);

        }
     return count;
        
    }
    
    
    
  public:
    int numberOfSubarrays(vector<int>& arr, int target) {
       return atMost(arr,target) - atMost(arr,target-1);
    }
    
};