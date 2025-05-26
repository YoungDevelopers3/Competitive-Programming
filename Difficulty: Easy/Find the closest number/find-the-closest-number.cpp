
class Solution {
  public:
    int findClosest(vector<int>& arr, int k) {
        int l=lower_bound(arr.begin(),arr.end(),k)-arr.begin();
        int ans=0;
        
            if(abs(k-arr[l])==abs(k-arr[l-1])){
                ans=arr[l];
            }
           else if(abs(k-arr[l])>abs(k-arr[l-1])){
                ans=arr[l-1];
            }
            else{
                ans=arr[l];
            }
            
           
        return ans;
        
        
    }
};