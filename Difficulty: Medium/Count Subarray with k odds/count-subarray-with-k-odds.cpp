class Solution {
  public:
    int countSubarrays(vector<int>& arr, int k) {
        // code here
        return AtMost(arr,k)-AtMost(arr,k-1);
    }
    
    private:
    int AtMost(vector<int>& arr,int k){
        if(k<0){
            return 0;
        }

        int right=0,left=0,count=0,odd=0,n=arr.size();

        for(right=0;right<n;right++){

           odd=odd+arr[right]%2;
           while(odd>k){
            odd=odd-(arr[left]%2);
            left++;
           }
          count=count+(right-left+1);


        }
       return count;


    }
    
};